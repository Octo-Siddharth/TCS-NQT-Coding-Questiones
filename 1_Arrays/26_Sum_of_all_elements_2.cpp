//Program to find the sum of all elmnts present in an array using vector
#include<bits/stdc++.h>

using namespace std;

int main()
{
//Using vector    
    int n, elements, sum = 0;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++)
    {
        cin>>elements;
        arr.push_back(elements);
    }
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum;
    return 0;

//Using array
    int arr[100];
    int size;
    cin>>size;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum = sum + arr[i];
    } 
    cout<<sum;
    return 0;
}