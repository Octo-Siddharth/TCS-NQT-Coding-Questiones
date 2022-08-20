//Program to reverse an array ultra short cut
#include<bits/stdc++.h>

using namespace std;

void reverse_ar(vector<int> &arr)
{
    reverse(arr.begin(), arr.end());
}

void print(vector<int> arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
   
    cout<<"The reverse of the array is : ";
    reverse_ar(arr);
    print(arr, n);

}