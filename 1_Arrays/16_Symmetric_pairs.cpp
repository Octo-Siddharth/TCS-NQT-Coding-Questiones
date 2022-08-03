//Find all symmetric pairs in an array
#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    vector<vector<int>> arr = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    int n = arr.size();
    //Using map
    /*unordered_map<int, int> mp;
    cout<<"The symmetric pairs are : ";
    for(int i = 0; i<n; i++)
    {
        int first = arr[i][0];
        int second = arr[i][1];

        if(mp.find(second) != mp.end() && mp[second] == first)
        {
            cout<<"("<<first<<" "<<second<<")"<<" ";
        }
        else
        {
            mp[first] = second;
        }
    }
    //T.C -> O(n) S.C -> O(n)
    */

    //Using loops
    for(int i = 0; i<n; i++)
    {
        for(int j = i + 1; j<n; j++)
        {
            if(arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0])
            {
                cout<<"("<<arr[i][1]<<" "<<arr[i][0]<<")"<<" ";
            }
        }
    }
}

//T.C -> O(n*n) S.C -> O(1)