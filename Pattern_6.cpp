//patterns 6 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter n value:";
	cin>>n;
	for(int row=0;row<2*n;row++)
	
	{
	int totalColsInRow=row>n?2*n-row:row;
	int noOfSpaces=n-totalColsInRow;
	for(int s=0;s<noOfSpaces;s++)
	{
		cout<<" ";
	}
	for(int col=1;col<totalColsInRow;col++)
		{
		cout<<"* ";
		
		}
		
		cout<<endl;
	}
return 0;	
}
