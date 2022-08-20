//Program to find the non repeating element in an array
#include<bits/stdc++.h>

using namespace std;

void non_repeat(vector<int> arr)
{
    map<int, int> mp;
    for(auto i : arr)
    {
        mp[i]++;
    }
    for(auto i : mp)
    {
        if(i.second == 1)
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
    non_repeat(arr);

    return 0;
}