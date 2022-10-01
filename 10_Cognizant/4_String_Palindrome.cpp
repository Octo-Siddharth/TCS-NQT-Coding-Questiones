//Program to checkastring is palindrome or not
#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(string s)
{
    string temp = s;
    reverse(s.begin(),  s.end());
    if(temp == s)
    {
        return true;
    }
    return false;
}

int main()
{
    string s;
    getline(cin, s);
    if(checkPalindrome(s))
    {
        cout<<s<<" is a Plaindrome"<<endl;
    }
    else
    {
        cout<<s<<" is not a Plaindrome"<<endl;
    }
}