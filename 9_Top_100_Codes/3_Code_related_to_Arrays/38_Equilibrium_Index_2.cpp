//Program to find the equilibrium index of an array
#include<bits/stdc++.h>

using namespace std;

int find(int arr[], int n)
{
    int total_sum = 0, left_sum = 0;
    for(int i = 0; i<n; i++)
    {
        total_sum = total_sum + arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        total_sum = total_sum - arr[i];
        if(left_sum == total_sum)
        {
            return i;
        }
        left_sum = left_sum + arr[i];
    }
    return -1;
}

int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"The Equilibrium of the array is : "<<find(arr,n)<<endl;
    return 0;
}