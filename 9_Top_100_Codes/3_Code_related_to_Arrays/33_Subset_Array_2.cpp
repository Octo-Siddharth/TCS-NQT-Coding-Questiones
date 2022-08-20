//Program to determine the array is a subset of another array
#include<bits/stdc++.h>

using namespace std;

bool isSubset(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    if(m > n)
    {
        return false;
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                break;
            }
            if(j == m)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<int> arr1 = {11, 10, 13, 21, 30, 70};
    vector<int> arr2 = {11, 30, 70, 10};
    int n, m;
    n = arr1.size();
    m = arr2.size();

    if(isSubset(arr1, arr2, n, m) == true)
    {
        cout<<"ARR2[] is a subset of ARR[]"<<endl;
    }
    else
    {
        cout<<"ARR2[] is not a subset of ARR[]"<<endl;
    }
    return 0;
}