//Reverse an array
#include<bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArr(int arr[], int s, int e)
{
    if(s<e)
    {
        swap(arr[s], arr[e]);
        reverseArr(arr, s + 1, e - 1);
    }
}
//Using Built in function
void arrRev(int arr[], int n)
{
    reverse(arr, arr + n);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    //reverseArr(arr, 0, n - 1);
    arrRev(arr, n);
    printArr(arr, n);
    return 0;
}