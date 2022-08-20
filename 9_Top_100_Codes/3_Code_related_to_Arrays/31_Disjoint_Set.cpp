//Program to check if arrays are disjoint or not
#include<bits/stdc++.h>

using namespace std;

int disjoint(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    vector<int> arr1 = {10, 20, 30, 67};
    vector<int> arr2 = {20, 90, 80, 77, 23};
    int n, m;
    n = arr1.size();
    m = arr2.size();

    if(disjoint(arr1, arr2, n, m))
    {
        cout<<"Disjoint Arrays"<<endl;
    }
    else
    {
        cout<<"Not Disjoint Arrays"<<endl;
    }
   return 0;
}