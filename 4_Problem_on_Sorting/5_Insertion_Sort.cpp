//Algo and Program of Insertion Sort
#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        int temp = arr[i];
        int j;
        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
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
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}

//T.C -> O(N^2) S.C -> O(1)