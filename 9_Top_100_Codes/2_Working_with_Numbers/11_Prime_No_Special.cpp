//Pogram to find the Prime numbers between 1 to 100 
#include<bits/stdc++.h>

using namespace std;

int isprime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    for(int i = 2; i<n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int min = 1, max = 100;
    for(int i = min; i<=max; i++)
    {
        if(isprime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}