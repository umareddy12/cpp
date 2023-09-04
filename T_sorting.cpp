//sort the array in ascending order.
// hence the smallest element will be at the 0th index.
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int sortArr(vector<int>& arr){
    sort(arr.begin(), arr.end());//for ascending order
    return arr[0];
}

int main() {
    vector<int> arr1 = {1, 53, 6, 7, 89};//initialize list
    vector<int> arr2 = {0, 7, 2, 3};

    cout << "Smallest element in arr1: " << sortArr(arr1) << endl;
    cout << "Smallest element in arr2: " << sortArr(arr2) << endl;

    return 0;
}

