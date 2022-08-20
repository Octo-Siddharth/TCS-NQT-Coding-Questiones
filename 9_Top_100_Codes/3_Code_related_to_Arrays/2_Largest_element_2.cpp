//Progra mt ofing the largest element in an array shortcut technique
#include<bits/stdc++.h>

using namespace std;

int maxval(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main()
{
    
    int n, maxi;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    maxi = maxval(arr);
    cout<<"The largest element in thearray is : "<<maxi<<endl;

    return 0;
   
}