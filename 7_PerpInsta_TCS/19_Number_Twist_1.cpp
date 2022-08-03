/*
Find the 15th term of the series?

0,0,7,6,14,12,21,18, 28

Explanation : In this series the odd term is increment of 7 {0, 7, 14, 21, 28, 35 – – – – – – }

                        And even term is a increment of 6 {0, 6, 12, 18, 24, 30 – – – – – – }

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin>>n;
    if(n == 1 || n == 2)
    {
        cout<<0;
    }
    else if(n % 2 == 0)
    {
        n = n / 2;
        d = 6;
    }
    else
    {
        n = n / 2 + 1;
        d = 7;
    }
    cout<<(n - 1)*d;
    return 0;
}