//Search element in an array
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {6, 7, 9, 5, 3, 10};
    int n = arr.size();
    int k = 5;
    int ans = -1;
    for(int i = 0;i<n; i++)
    {
        if(arr[i] == k)
        {
            ans = i;
            break;
        }
    }
    cout<<"The element found at index : "<<ans;
    return 0;
}