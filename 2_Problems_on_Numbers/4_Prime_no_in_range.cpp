//Print all Prime numbers in between a range
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int &n)
{
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
    int min = 2;
    int max = 17;
    for(int i = min; i<=max; i++)
    {
        if(isPrime(i) == true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}

//T.C -> O(N sq) S.C -> O(1) 