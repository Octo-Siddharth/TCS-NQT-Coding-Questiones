//Program to find the Fibonacci Series upto Nterms
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, a = 0, b = 1;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i<n; i++)
    {
        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;

    }
}