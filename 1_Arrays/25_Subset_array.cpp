//Check if the array is subset of another array or not
#include<bits/stdc++.h>

using namespace std;

bool checkSubset(vector<int> &arr1, int n1, vector<int> &arr2, int n2)
{
    if(n2 > n1)
    {
        return false;
    }
    unordered_map<int, bool> mp;
    for(int i = 0; i<n1; i++)
    {
        mp[arr1[i]] = true;
    }
    for(int i = 0; i<n2; i++)
    {
        if(mp.count(arr2[i])==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr1 = {2,4,3,1,7,5,15};
    vector<int> arr2 = {1,3,4,5,2};

    int n1 = arr1.size();
    int n2 = arr2.size();

    bool ans = checkSubset(arr1, n1, arr2, n2);

    if(ans == 1)
    {
        cout<<"ARR2[] is the subset of ARR1[]"<<endl;
    }
    else
    {
        cout<<"ARR2[] is not the subset of ARR1[]"<<endl;
    }

    return 0;
}

//Using Unordered_map T.C -> O(n) S.C -> O(1)