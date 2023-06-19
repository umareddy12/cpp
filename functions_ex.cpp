#include<bits/stdc++.h> // header files
using namespace std;
int r;
int  sum(int x,int y) // void null
{
    int r=x+y;
    return r;
}
void largest(int x,int y,int z)
{
  cout<<max(x,max(y,z));	
}
int main()
{
   int a,b,c,d,g,h,s1,s2,s3; // 
   cin>>a>>b>>c>>d>>g>>h;
   s1=sum(a,b);
   s2=sum(c,d);
   s3=sum(g,h);
   largest(s1,s2,s3);
   return 0;
}
