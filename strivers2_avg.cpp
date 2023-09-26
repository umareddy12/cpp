#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	
	cout<<"enter number of elements in array :";
	cin>>n;
	vector<int>arr(n);
	cout<<"enter array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
}
int minimum=arr[0];
double sum=0;
for(int i=0;i<n;i++){
	sum=sum+(double)arr[i];
	

	
}
double x=sum/n;
cout<<"Average of elements:"<<x<<endl;
return 0;

}
