//Program to count the distinct element in an array
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100], n;
    unordered_map<int, int> mp;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        mp[arr[i]]++;
    }

    cout<<"The Distinct elements are : "<<mp.size()<<endl;
}