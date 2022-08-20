//Program to remove the duplicates form an unsorted array
#include<bits/stdc++.h>

using namespace std;

int remove_duplicate(vector<int> &arr, int n)
{
    int i = 0;
    sort(arr.begin(), arr.end());
    for(int j= 0; j<n; j++)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

void print(vector<int> &arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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