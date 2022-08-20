// Program to find the longest palindrome in an array
#include <bits/stdc++.h>

using namespace std;

int isPlaindrome(int n)
{
    int rev = 0, temp = n;
    while (temp > 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (n == rev)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n, ans = INT_MIN;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (isPlaindrome(arr[i]) && ans < arr[i])
        {
            ans = arr[i];
        }
    }
    if (ans == INT_MIN)
    {
        ans = -1;
    }
    cout << "Longest palindrome : " << ans;
}