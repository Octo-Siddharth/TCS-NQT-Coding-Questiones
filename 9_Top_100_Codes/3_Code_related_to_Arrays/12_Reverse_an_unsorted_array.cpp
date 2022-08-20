//Program to reverse an unsorted array
#include<bits/stdc++.h>

using namespace std;

void reverse_arr(int arr[], int s, int e)
{
    if(s<e)
    {
        swap(arr[s], arr[e]);
        reverse_arr(arr, s+ 1, e - 1);
    }
}

void print(int arr[], int n)
{
    sort(arr, arr + n);
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
    reverse_arr(arr, 0, n - 1);
    print(arr, n);

}