//Program to find the Prime factors of a number
#include<bits/stdc++.h>

using namespace std;

void primefactors(int &n)
{
    cout<<"The Prime factors of the number are : ";
    for(int i = 2; i>1; i++)
    {
        if(n % i == 0)
        {
            n = n / i;
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    primefactors(n);

    return 0;
}