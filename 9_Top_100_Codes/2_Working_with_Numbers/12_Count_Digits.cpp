//Program to count the number of digits in a number
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, digit = 0;
    cin>>n;
    while(n > 0)
    {
        n = n / 10;
        digit++;
    }
    cout<<"The number of digits in the number are : "<<digit<<endl;

    return 0;
}