#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int n)
{
    int rem = 0, rev, temp;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (isPalindrome(n))
    {
        cout << n << " is a Palindrome" << endl;
    }
    else
    {
        cout << n << " is not a Palindrome" << endl;
    }
}