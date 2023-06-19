//Reddy uma
//question-6
//Write a program to check whether password is correct or not and the old password is"453JJDKV@"
#include<iostream>//header file
using namespace std;
int main()//main function
{
	//declaration
	string x;
	string y="453JJDKV@";
	//asking input
	cout<<"enter any password:"<<endl;
	cin>>x;
	if(x==y)//compairing
	{
		cout<<"password is correct";
	}
	else
	{
		cout<<"incorrect password";
	}
	return 0;
}
