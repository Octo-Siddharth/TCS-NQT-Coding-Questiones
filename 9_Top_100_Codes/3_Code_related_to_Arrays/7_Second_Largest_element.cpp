//Program to find the second largest element in an array
#include<bits/stdc++.h>

using namespace std;

int second_large(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 2];
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
    cout<<"The seceond largest element is : "<<second_large(arr)<<endl;

    return 0;
}