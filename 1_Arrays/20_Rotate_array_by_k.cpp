//Rotate the array by k elements
#include<bits/stdc++.h>

using namespace std;

void reverse(int arr[], int s, int e)
{
    while(s<=e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

void rotateElements(int arr[], int n, int k)
{
    reverse(arr, 0, n - k - 1);

    reverse(arr, n - k, n - 1);

    reverse(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    rotateElements(arr, n, k);
    cout<<"The Rotated elemenets in the array are : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//T.C -> O(n) S.C -> O(1)