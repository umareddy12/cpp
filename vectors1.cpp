#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    vector<int>even;
    vector<int>odd;
    int n,t=0;
    cin>>n;
    for(int i=0;i<10;i++){
        cin>>t;
        arr.push_back(t);
         if(t%2==0)
        {
            even.push_back(t);
        }
        else
        {
            odd.push_back(t);
        }
    }
    cout<<"EVEN NUMBERS IN THE ARRAY:";
    for(int i=0;i<even.size();i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<"\nODD NUMBERS IN THE ARRAY:";
    for(int i=0;i<odd.size();i++)
    {
        cout<<odd[i]<<" ";
    }
    
    return 0;
}
