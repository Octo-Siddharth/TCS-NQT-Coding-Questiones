//Check a number is palindrome or not
#include<bits/stdc++.h>

using namespace std;

int reverse(int &n)
{
    int m = 0;
    while(n > 0)
    {
        int digit = n%10;

        m = m * 10 + digit;

        n = n / 10;
    }
    return m;
}

int main()
{
    int n = 121;
    int temp = n;
    int m = reverse(n);

    if(temp == m)
    {
        cout<<temp<<" is a Palindrome";
    }
    else
    {
        cout<<temp<<" is not a Palindrome";
    }
    return 0;
}

//T.C -> O(logn)  S.C -> O(1)