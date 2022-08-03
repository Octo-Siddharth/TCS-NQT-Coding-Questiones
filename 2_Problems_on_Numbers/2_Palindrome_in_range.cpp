//Find al the palindrome numbers in a given range
#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(int n)
{
    int m = 0;
    int temp = n;
    while(temp > 0)
    {
        int digit = temp % 10;
        m = m * 10 + digit;
        temp  = temp / 10;
    }
    if(n == m)
    {
        return true;
    }
    return false;
}

int main()
{
    int min = 100;
    int max = 150;
    for(int i = min; i<=max; i++)
    {
        if(isPalindrome(i))
        {
            cout<<i<<" ";
        }
    }
}

//T.C -> O(n) S.C -> O(1)