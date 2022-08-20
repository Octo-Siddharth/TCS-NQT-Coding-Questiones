//Program to find the repeating elements in an array
#include<bits/stdc++.h>

using namespace std;

void repeat(vector<int> &arr)
{
    map<int, int> mp;
    for(auto i : arr)
    {
        mp[arr[i]]++;
    }
    for(auto i : mp)
    {
        if(i.second > 1)
        {
            cout<<i.first<<" ";
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
    repeat(arr);

    return 0;
}