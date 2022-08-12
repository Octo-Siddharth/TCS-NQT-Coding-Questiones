//Program to check if anumber is Palindrome or not
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp, rem, ans = 0;
    cin>>n;
    temp = n;
    while(n != 0)
    {
        rem = n % 10;
        ans=ans * 10 + rem;
        n = n / 10;
    }

    if(temp == ans)
    {
        cout<<temp<<" is a Palindrome Number"<<endl;
    }
    else
    {
        cout<<temp<<" is not a Palindrome Number"<<endl;
    }
}