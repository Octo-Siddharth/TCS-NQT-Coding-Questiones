//Program to check if the stringis palindrome or not
#include<bits/stdc++.h>

using namespace std;

bool checkPlaindrome(string s)
{
    string temp = s;
    reverse(s.begin(), s.end());
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
    
    if(checkPlaindrome(s))
    {
        cout<<s<<" is a palindrome "<<endl;
    }
    else
    {
        cout<<s<<" is not a palindrome "<<endl;
    }
}