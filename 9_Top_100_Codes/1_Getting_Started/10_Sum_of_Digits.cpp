//Program to find the sum of digits of a number

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum = 0;
    for(int i = 0; i<=s.length(); i++)
    {
        sum = sum + i;
    }
    cout<<sum;

}