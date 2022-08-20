// Program for Sorting of elements by frequency in C++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {3, 2, 4, 3, 2, 2, 1, 1};
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]] = 1;
        }
        else
        {
            mp[arr[i]]++;
        }
    }
    sort(arr.begin(), arr.end(), [&mp](int a, int b)
         {
    if(mp[a]!=mp[b])
    {
        return mp[a]>mp[b];
    }
    return a<b; });
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}