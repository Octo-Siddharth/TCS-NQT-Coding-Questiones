//Program to find the square root of the prime number
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n == 0 || n == 1)
    {
        return false;
    }
    for(int i = 2; i<= sqrt(n); i++)
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
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<n<<" is a square root of prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a square root of prime number"<<endl;
    }
}