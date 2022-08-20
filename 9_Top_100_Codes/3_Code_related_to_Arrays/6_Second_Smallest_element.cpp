//Program to find the seconds smallest element
#include<bits/stdc++.h>

using namespace std;

int second_small(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[1];
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
    cout<<"The second smallest element is : "<<second_small(arr)<<endl;

    return 0 ;
}