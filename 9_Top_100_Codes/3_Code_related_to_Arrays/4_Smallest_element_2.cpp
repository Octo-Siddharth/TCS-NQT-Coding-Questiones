//Program to find the smallest element in an array
#include<bits/stdc++.h>

using namespace std;

int small_Element(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[0];
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The smallest element in the array is : "<<small_Element(arr)<<endl;

    return 0;
}