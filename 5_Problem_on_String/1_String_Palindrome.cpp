//Program to check if a String is palindrome or not
#include<bits/stdc++.h>

using namespace std;

//Using reverse function
/*
bool isPalindrome(string s)
{
    string temp = s;
    reverse(s.begin(), s.end());
    if(temp == s)
    {
        return true;
    }
    return false;
}*/

//Iterative Optimized Approach 

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
    string s = "malayalam";
    int n = s.length();
    if(isPalindrome(s))
    {
        cout<<s<<" is a Palindrome"<<endl;
    }
    else
    {
        cout<<s<<" is not a Palindrome"<<endl;
    }
    return 0;
}

//For using Reverse function T.C -> O(N) S.C -> O(N).
//For Travesing String T.C -> O(N) S.C -> O(1).