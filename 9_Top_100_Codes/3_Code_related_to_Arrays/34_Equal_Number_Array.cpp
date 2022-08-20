//Program to determine can all numbers of an array be made equal
#include<bits/stdc++.h>

using namespace std;

int equal_No(int arr[100], int n)
{
    for(int i= 0; i<n; i++)
    {
        while(arr[i] % 2 == 0)
        {
            arr[i] = arr[i]/2;
        }
        while(arr[i] % 3 == 0)
        {
            arr[i] = arr[i]/3;
        }
        if(arr[i] != arr[0])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int arr[100], n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    if(equal_No(arr, n))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}