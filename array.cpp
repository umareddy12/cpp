//arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cin >> array[i];
        cout << array[i] << " ";
    }

    return 0;
}





