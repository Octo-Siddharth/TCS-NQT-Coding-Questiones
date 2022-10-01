//Program to find the number of frequency of charcters in a string
#include<bits/stdc++.h>

using namespace std;

void solve(string s)
{
    unordered_map<char, int> mp;
    for(char ch : s)
    {
        mp[ch]++;
    }
    for(char ch : s)
    {
        if(mp[ch] != 0)
        {
            cout<<ch<<mp[ch]<<" ";
            mp[ch] = 0;
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    solve(s);
}