//Program to reverse a number
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num, rev, rem = 0;
    cin>>num;
    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout<<rev<<endl;
    return 0;
}