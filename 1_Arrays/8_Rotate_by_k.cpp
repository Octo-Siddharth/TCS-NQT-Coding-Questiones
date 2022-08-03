//Rotate the array by k elemnts [Block Swap Algorithim]
#include<bits/stdc++.h>

using namespace std;

void swap(int arr[], int a, int b, int k)
{
    for(int i = 0; i<k; i++)
    {
        int temp = arr[a + i];
        arr[a + i] = arr[b + i];
        arr[b + i] = temp;
    }
}

void blockswap(int arr[], int k, int n)
{
    if( k == 0 || k == n)
    {
        return;
    }

    if(k == n - k)
    {
        swap(arr, 0, n - k, k);
        return;
    }

    else if(k < n - k)
    {
        swap(arr, 0, n - k, k);
        blockswap(arr, k, n - k);
    }
    else
    {
        swap(arr, 0, k, n - k);
        blockswap(arr + n - k, 2 * k - n, k);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    blockswap(arr, k, n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//T.C -> O(n) S.C -> O(1)