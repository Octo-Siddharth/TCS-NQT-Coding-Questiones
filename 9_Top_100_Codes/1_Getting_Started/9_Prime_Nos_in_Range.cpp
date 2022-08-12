//Program to find all the Prime Numbers in a Range
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int &n)
{
    if(n <= 1)
    {
        return false;
    }
    for(int i = 2; i<n; i++)
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
    int min, max;
    cin>>min>>max;
    for(int i = min; i<=max; i++)
    {
        if(isPrime(i) == true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}