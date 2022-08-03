//Adding element in the last of an array
#include<bits/stdc++.h>

using namespace std;

void insertEnd(int arr[], int n, int val)
{
    arr[n] = val;
}

int main()
{
    int arr[] = {10,9,14,8,20,48,16,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = 40;
    cout<<"The elements present in the array before insertion : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertEnd(arr, n ,val);
    cout<<"The elements present in the array after insertion : ";
    for(int i = 0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}