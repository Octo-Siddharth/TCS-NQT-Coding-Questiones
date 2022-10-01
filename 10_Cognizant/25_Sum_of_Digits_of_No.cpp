//Program to find the sum of digit of a number
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, rem = 0, sum = 0;
    cin>>n;
    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    cout<<sum<<endl;
}