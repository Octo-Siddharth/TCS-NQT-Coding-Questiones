//Express given number as Sum of Two Prime Numbers
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPrimesum(int n)
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
    int n = 19;
    if(isPrimesum(n))
    {
        cout<<n<<" is a sum of two Prime Numbers"<<endl;
    }
    else
    {
        cout<<n<<" is not a sum of two Prime Numbers"<<endl;
    }
    return 0;
}

//T.C -> O(sqrtN) S.C -> O(1)