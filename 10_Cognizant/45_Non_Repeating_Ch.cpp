//Program to print the non repeating character in a string
#include<bits/stdc++.h>

using namespace std;

void solve(string s)
{
    unordered_map<char, int> mp;
    for(char ch : s)
    {
        mp[ch]++;
    }
    for(int i = 0; i<s.length(); i++)
    {
        if(mp[s[i]] == 1)
        {
            cout<<s[i]<<" ";
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    solve(s);
}