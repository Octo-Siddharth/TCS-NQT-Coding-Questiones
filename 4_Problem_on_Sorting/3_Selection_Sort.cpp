//Algo and Program of Selection Sort
#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i< n - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j<n ; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
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

//T.C -> O(N^2) S.C -> O(1)