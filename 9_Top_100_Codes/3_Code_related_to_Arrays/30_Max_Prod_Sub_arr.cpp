// Program for finding the maximum product of sub-array of a given array
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, -2, -3, 0, 7, -8, -2}, n, ans;
    n = sizeof(arr) / sizeof(arr[0]);
    ans = arr[0];

    for (int i = 0; i < n; i++)
    {
        int prod = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            ans = max(ans, prod);
            prod = prod * arr[j];
        }
        ans = max(ans, prod);
    }
    cout << "Max product : " << ans << endl;

    return 0;
}