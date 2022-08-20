//Program to sort the array in increasing and decreasing order
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i<n/2; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i = n - 1; i >= n/2; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}