//pattern 4 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter n value:";
	cin>>n;
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=row;col++)
		{
			cout<<col ;
		}
		cout<<endl;
	}
return 0;	
}
