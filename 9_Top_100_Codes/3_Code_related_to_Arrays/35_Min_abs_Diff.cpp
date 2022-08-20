//Program to find sum of minimum absolute difference of the given array in C++
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {2, 4, 5, 3};
    int n, sum = 0, median, ans;
    n = arr.size();
    sort(arr.begin(), arr.end());

    if(n%2 == 0)
    {
        median = ((arr[n/2] + arr[n/2+1])/2);
    }
    else
    {
        median = arr[n/2];
    }
    for(int i = 0; i<n; i++)
    {
        ans = arr[i] - median;
        if(ans < 0)
        {
            sum = sum - ans;
        }
        else
        {
            sum = sum + ans;
        }
    }
    cout<<"Minimum absolute difference : "<<ans<<endl;

    return 0;
}