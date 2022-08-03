//Algo and Program of Bubble Sort Using Recursion
#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n)
{
    //Base Case
    if(n == 0 || n == 1)
    {
        return;
    }
    for(int i = 0; i< n - 1; i++)
    {
        if(arr[i] > arr[ i + 1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    //Recursive call
    bubbleSort(arr, n - 1);
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
    bubbleSort(arr, n);
    printArr(arr, n);

    return 0;
}

//T.C -> O(N) S.C -> O(1)