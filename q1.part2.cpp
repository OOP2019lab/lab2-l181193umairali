#include<iostream>
#include<string>
using namespace std;
struct githubuser
{
	string firstname,lastname;
	string username;
	string pass,email;
};
void githubuser1(githubuser p1[10],bool flag);
   void githubuser1(githubuser1  p1[10], githubuser1 size); 
int main()
{
	githubuser *p1;
	
	int size=0,j=0;
	bool flag=false;
	cout<<"Enter size : ";
	cin>>size;
	p1=new githubuser[size];
	for(int q=0;q<size;q++){

		cout<<"Enter First namer for user 1 :"<<q+1<<endl;
		cin>>p1[q].firstname;
		cout<<"Please ente  username name for use 1 :"<<q+1<<endl;
		cin>>p1[q].username;
		for(j=0;j<q;j++){
		if(q>0){
		if(p1[q].username==p1[q-1].username)
			{
				cout<<"This is already exsist /n :"<<endl;
				flag=true;
			}
			cout<<"Please enter your email address 1:"<<q+1<<endl;
		cin>>p1[q].email;	
		cout<<"Please enter your passward address 1:"<<q+1<<endl;
		cin>>p1[q].pass;
	}
		}
		}
	githubuser1(p1,flag);
	githubsearchUser(p1,size);
		system("pause");
		return 0;
	}
	void githubuser1(githubuser p1[10],bool flag)
	{
	   flag =false;
		int q=0,j=0;
		if(q>0)
			j=q;
		if(flag==true){
			cout<<"Please enter username again: "<<endl;
			cin>>p1[q].username;
		}
	}
	   void githubuser1(githubuser1  p1[10], githubuser1 size)
	{

