//Program to find the greatest among the number
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100], n;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+1);
    cout<<"The maximum number is : "<<arr[n-1];
}