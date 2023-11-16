//pattern 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter n value:";
	cin>>n;
	for(int row=1;row<=n;row++)
	{
		int noOfSpaces=n-row;
		for(int s=1;s<=noOfSpaces;s++)
		{
		cout<<" ";
		}
		for(int col=row;col>=1;col--)
		{
			cout<<col<<" " ;
		}
		for(int col=2;col<=row;col++)
		{
			cout<<col<<" " ;
		}
		cout<<endl;
	}
return 0;	
}
