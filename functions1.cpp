//functions
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
    {
        cout<<a;
        return(a);
    }
    else if(b>a && b>c && b>d)
    
    {
        cout<<b;
        return(b);
    }
    else if(c>a && c>b && c>d)
    {
        cout<<c;
        return(c);
    }
    else
    {
        cout<<d;
        return(d);
    }
}
int main()
{
    int a,b,c,d,max;
    cin>>a>>b>>c>>d;
    max=max_of_four(a,b,c,d);
}


