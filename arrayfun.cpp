#include<bits/stdc++.h>
using namespace std;
// mutliple array 
void fill(int n,int b[])
{
    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }  
}
void get(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";  
    } 
}


int main()
{
    int x,y;
    cin>>x>>y;
    int arr[x];
    int a[y];
    fill(x,arr);
    fill(y,a);
    get(x,arr);
    cout<<endl;
    get(y,a);
    return 0;
}
