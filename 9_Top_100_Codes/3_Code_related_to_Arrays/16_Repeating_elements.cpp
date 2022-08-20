//Program to find the repeating elements in an array
#include<bits/stdc++.h>

using namespace std;

void repeat(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    for(int i = 0; i<n - 1; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            cout<<arr[i]<<" ";
        }
    }
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

    repeat(arr, n);
    return 0;
}