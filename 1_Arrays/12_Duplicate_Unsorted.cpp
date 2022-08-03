//Remove duplicate from a unsorted array
#include<bits/stdc++.h>

using namespace std;

int removeDuplicate(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    int i = 0;
    for(int j = 1; j < n; j++)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main()
{
    vector<int> arr ={2,3,1,9,3,1,3,9};
    int n = arr.size();
    int k = removeDuplicate(arr, n);
    for(int i = 0; i<k; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//T.C -> O(nlogn) S.C -> O(1)