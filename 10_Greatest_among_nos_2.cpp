//Program to check the greatest amaong numbers 2
#include<bits/stdc++.h>

using namespace std;

int maxEle(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
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
    cout<<"The largest elements is : "<<maxEle(arr)<<endl;
}