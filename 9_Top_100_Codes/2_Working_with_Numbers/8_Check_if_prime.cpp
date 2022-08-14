//C++ Program to check whether a number be expressed as a sum of two prime numbers
#include<bits/stdc++.h>

using namespace std;

int isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    for(int i = 2; i<=sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPossible(int n)
{
    if(isPrime(n) && isPrime(n - 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin>>n;
    if(isPossible(n))
    {
    cout<<n<<" is a sum of two Prime numbers "<<endl;
    }
    else
    {
        cout<<n<<" is not a sum of two Prime numbers"<<endl;
    }
}