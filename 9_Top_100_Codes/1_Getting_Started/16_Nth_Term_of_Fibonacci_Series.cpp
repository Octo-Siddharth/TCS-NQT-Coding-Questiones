//Program to find the Nth term of Fibonacci Series
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a = 0, b = 1, sum = 0;
    cin>>n;
    if(n == 0 || n == 1)
    {
        cout<< a;
    }
    for(int i = 2; i<=n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout<< b;
}