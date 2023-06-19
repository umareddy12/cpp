//Reddy Uma
//To check whether the given 2 string length is same or not.
#include<iostream>//header file
using namespace std;
int main()//main function
{
	
	string s,r;//declaration
	//asking input
	cout<<"enter 1st string:"<<endl;
	cin>>s;
	cout<<"enter 2nd string:"<<endl;
	cin>>r;
	if(s.length()==r.length())
	{
		cout<<"string length is same"<<endl;
	}
	else
	{
		cout<<" string length is  not same";
	}
	return 0;
}
