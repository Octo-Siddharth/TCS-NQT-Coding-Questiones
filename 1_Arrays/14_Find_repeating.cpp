//Find the repeating elements in an array
#include<bits/stdc++.h>

using namespace std;
//Using map
/*void findDuplicate(vector<int> &arr, int n)
{
    unordered_map<int, int> mp;
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
    //T.C O(n) S.C O(n)
}*/
//Using loops
void findDuplicate(vector<int> &arr, int n)
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
//T.C O(nlogn) + O(n)  S.C O(1)

int main()
{
    vector<int> arr = {1,1,2,3,4,4,5,2};
    int n = arr.size();
    findDuplicate(arr, n);

    return 0;
}