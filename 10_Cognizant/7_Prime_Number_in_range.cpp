//Program to find the prime numbers in a range
#include<bits/stdc++.h>

using namespace std;

bool findPrime(int &n)
{
    if(n == 0 || n == 1)
    {
        return false;
    }
    for(int i = 2; i<=n/2; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int mini, maxi;
    cin>>mini>>maxi;
    for(int i = mini; i<=maxi; i++)
    {
        if(findPrime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}