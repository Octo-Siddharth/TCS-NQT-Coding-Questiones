//Adding element in giveb position of an array
#include<bits/stdc++.h>

using namespace std;

void insertPos(int arr[], int n, int pos, int val)
{
    for(int i = n; i>=pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
}

int main()
{
    int arr[] = {10,9,14,8,20,48,16,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = 40;
    int pos = 5;
    cout<<"The elements of the array before insertion :";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertPos(arr, n ,pos, val);
    cout<<"The elements of the array after insertion : ";
    for(int i = 0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//T.C -> O(n) S.C -> O(n)
