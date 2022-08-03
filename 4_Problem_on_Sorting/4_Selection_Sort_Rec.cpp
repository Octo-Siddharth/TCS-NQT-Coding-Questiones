//Algo and Program of Selection Sort using Recursion
#include<bits/stdc++.h>

using namespace std;

int minIndex(int arr[], int i, int j)
{
    if(i == j)
    {
        return i;
    }
    int k = minIndex(arr, i + 1, j);

    if(arr[i] < arr[k])
    {
        k = i;
    }
    return k;
}

void selectionSort(int arr[], int n, int i = 0)
{
    if( i == n)
    {
        return;
    }
    int k = minIndex(arr, i, n - 1);
    if(k != i)
    {
        swap(arr[k], arr[i]);
    }

    selectionSort(arr, n, i + 1);
}

void printArr(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The sorted array is : ";
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}

//T.C -> O(N) S.C -> O(1)