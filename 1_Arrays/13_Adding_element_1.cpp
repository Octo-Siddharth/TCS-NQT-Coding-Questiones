//Adding element in the beginning of an array
#include<bits/stdc++.h>

using namespace std;

void insertBeg(int arr[], int n, int val)
{
    for(int i = n - 1; i>=0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = val;
}

int main()
{
    int arr[] = {10,9,14,8,20,48,16,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = 40;
    cout<<"The elements present in the array before inserting : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertBeg(arr, n, val);
    cout<<"The elements present in the array after inserting : ";
    for(int i = 0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}