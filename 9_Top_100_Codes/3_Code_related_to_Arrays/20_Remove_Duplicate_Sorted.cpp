//Program to find the remove duplicate elements in a sorted array
#include<bits/stdc++.h>

using namespace std;

int remove_duplicate(vector<int> &arr, int n)
{
    int i = 0;
    for(int j = 1; j<n; j++)
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
    int n, ans;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    ans = remove_duplicate(arr, n);
    for(int i = 0; i<ans; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
