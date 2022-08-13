// Program to find the Abundant Number
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum > n)
    {
        cout << n << " is an Abundant Number" << endl;
        cout << "The Abundance is " << (sum - n) << endl;
    }
    else
    {
        cout << n << " is not an Abundant Number" << endl;
    }
    return 0;
}