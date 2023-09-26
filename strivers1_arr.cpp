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
for(int i=1;i<n;i++){

	
	if(arr[i]<minimum)
	{
		minimum=arr[i];
	}
	
}
cout<<"minimum element in the array is:"<<minimum<<endl;
return 0;
}
