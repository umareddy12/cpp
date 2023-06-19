//Reddy Uma Devi
//problem-2
//
#include<iostream>//header file
using namespace std;
int main()//main function
{
	int i,n,sum=0;//declaraction
	cout<<"enter 5 numbers:"<<endl;//asking for input
	for(i=0;i<5;i++)
	{
		cin>>n;
                              	sum=sum+n;
	}
                              //displaying output
	cout<<"sum of 5 numbers:"<<sum;
	return 0;
}

