#include<iostream>
#include<vector>
using namespace std;
int main(){
//Vectors
vector<int>n;
n.assign(9,1);
cout<<"the content are:";
for(int i=0;i<n.size();i++)
{
	cout<<n[i]<<" ";
	cout<<endl;	
}
n.push_back(2);
int num=n.size();
cout<<"size is:"<<num<<endl;
cout<<"Last element:"<<n[num-1]<<endl;
n.pop_back();
cout<<"now the contents are:";
for(int i=0;i<n.size();i++)
{
	cout<<n[i]<<" ";
	cout<<endl;
}
n.insert(n.begin(),7);
cout<<"first element is :"<<n[0]<<endl;
n.clear();
cout<<"now the size is:"<<n.size();
}

