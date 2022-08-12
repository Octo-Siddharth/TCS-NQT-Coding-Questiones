//Program to check a numner is prime or not
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n == 0 || n == 1)
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
    int n;
    cin>>n;
    bool ans = isPrime(n);

    if(ans == true)
    {
        cout<<n<<" Prime Number"<<endl;
    }
    else
    {
        cout<<n<<" is not Prime Number"<<endl;
    }
}