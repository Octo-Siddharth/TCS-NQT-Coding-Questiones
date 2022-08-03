//Check if a number is prime or not
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int &n)
{
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
    int n = 3;

    bool ans = isPrime(n);
    if(n != 1 && ans == true)
    {
        cout<<n<<" is a prime number";
    }
    else
    {
        cout<<n<<" is not a prime number";
    }
    return 0;
    
}

//T.C -> O(n)  S.C -> O(1)