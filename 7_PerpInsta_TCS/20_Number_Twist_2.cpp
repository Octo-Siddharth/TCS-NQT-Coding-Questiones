/*
Consider the following series: 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 …

This series is a mixture of 2 series – all the odd terms in this series form a geometric series and all the even terms form yet another geometric series. Write a program to find the Nth term in the series.

The value N in a positive integer that should be read from STDIN. The Nth term that is calculated by the program should be written to STDOUT. Other than value of n th term,no other character / string or message should be written to STDOUT. For example , if N=16, the 16th term in the series is 2187, so only value 2187 should be printed to STDOUT.

You can assume that N will not exceed 30.
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, r, term;
    cin>>n;
    if(n == 1 || n == 2)
    {
        cout<<1;
    }
    else if(n % 2 == 0)
    {
        n = n/2 - 1;
        r = 3;
    }
    else
    {
        n = n / 2;
        r = 2;
    }
    cout<<(int)(pow(r, n));
    return 0;
}