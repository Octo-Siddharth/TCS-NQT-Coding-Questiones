//Program to check if prime ot not
#include<bits/stdc++.h>

using namespace std;

bool checkPrime(int num)
{
    if(num == 0 || num == 1)
    {
        return false;
    }
    for(int i = 2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin>>num;

    if(checkPrime(num))
    {
        cout<<num<<" is a Prime Number"<<endl;
    }
    else
    {
        cout<<num<<" is not a Prime Number"<<endl;
    }
}