//Program to check the string is palindrome or not
#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    for(int i = 0; i<s.length()/2; i++)
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

    if(isPalindrome(s))
    {
        cout<<s<<" is a palindrome "<<endl;
    }
    else{
        cout<<s<<" is not a plaindrome "<<endl;
    }
    
}