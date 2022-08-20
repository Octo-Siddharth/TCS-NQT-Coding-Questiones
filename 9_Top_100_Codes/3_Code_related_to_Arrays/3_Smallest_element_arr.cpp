//Program to find the smallest element in an array
#include<bits/stdc++.h>

using namespace std;

int small_element(int arr[], int n)
{
    int min = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[100], n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The minimum element in tha array is : "<<small_element(arr, n)<<endl;

    return 0;

}