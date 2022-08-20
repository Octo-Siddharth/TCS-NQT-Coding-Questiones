//Program to find the frequency of elements in an array
#include<bits/stdc++.h>

using namespace std;

void countfreq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for(int i = 0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    for(auto i : mp)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
}

int main()
{
    int arr[100], n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    countfreq(arr, n);
    
    return 0;
}