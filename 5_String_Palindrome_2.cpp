//Program to chack if a string is a palindrome or not
#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(string s)
{
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] != s[s.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);

    if(checkPalindrome(s))
    {
        cout<<s<<" is a Palindrome"<<endl;
    }
    else
    {
        cout<<s<<" is not a Plaindrome"<<endl;
    }
}
