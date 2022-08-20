//Program to print the reverse on array
#include<bits/stdc++.h>

using namespace std;

void reverse_arr(int arr[], int n)
{
    reverse(arr, arr + n);
}

void print(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100], n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The reverse of the array is : ";
    reverse_arr(arr, n);
    print(arr, n);

    return 0;

}