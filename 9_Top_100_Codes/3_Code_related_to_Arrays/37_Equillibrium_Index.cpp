//Program to find the equilibrium index of an array
#include<bits/stdc++.h>

using namespace std;

void findEquilibrium(int arr[], int n)
{
    int left_Sum = 0, right_Sum = 0, ans = -1;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            left_Sum = left_Sum + arr[i];
        }
        for(int j = 0; j<n; j++)
        {
            right_Sum = right_Sum + arr[j];
        }
        if(right_Sum == left_Sum)
        {
            ans = i;
        }
    }
    cout<<"The equillibrium of the array is : "<<ans<<endl;
}

int main()
{
    int arr[100] = {4, -2, 0, 6, -4};
    int n = sizeof(arr)/sizeof(arr[0]);

    findEquilibrium(arr, n);

    return 0;
}