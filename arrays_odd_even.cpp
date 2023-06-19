// write a program to get even and odd numbers using arrays
// even odd 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n value:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter  n elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"even elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }

    }
    cout<<"\n"<<"Odd elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }

    }
    return 0;
}
