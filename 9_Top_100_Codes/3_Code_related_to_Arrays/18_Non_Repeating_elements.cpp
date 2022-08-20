//Program to find the non repeating elements in an array
#include<bits/stdc++.h>

using namespace std;

void non_repeat(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    for(int i = 0; i<n - 1; i++)
    {
        if(arr[i] != arr[i + 1])
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
    non_repeat(arr, n);

    return 0;
}
