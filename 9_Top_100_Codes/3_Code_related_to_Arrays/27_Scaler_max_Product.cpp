//Program to find maximum scalar of two vectors
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 6, 3, 7};
    vector<int> arr2 = {10, 7, 45, 3, 7};
    int ans = 0, n;
    n = arr1.size();

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i = 0; i<n; i++)
    {
        ans = ans + arr1[i]*arr2[i];
    }

    cout<<"The max Scaler of two vector : "<<ans<<endl;

    return 0;
}