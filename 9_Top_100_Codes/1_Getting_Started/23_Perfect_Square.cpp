//Program to check if the number is Perfecct Square or not
#include<bits/stdc++.h>

using namespace std;

bool Perfect_square(long long n)
{
    long long sq;
    if(n >= 0)
    {
        sq = sqrt(n);
        return (sq * sq == n);
    }
    return false;
}

int main()
{
    long long n;
    cin>>n;
    if(Perfect_square(n))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}