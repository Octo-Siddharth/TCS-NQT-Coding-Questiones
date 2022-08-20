//Program to find the largest element in an array
#include<bits/stdc++.h>

using namespace std;

int largestVal(int arr[], int n)
{
    int max = arr[n - 1];
    for(int i = 0; i<n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[100], n, max;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    max=largestVal(arr, n);
    cout<<"The maximum value of the array is : "<<max<<endl;
    return 0;
}