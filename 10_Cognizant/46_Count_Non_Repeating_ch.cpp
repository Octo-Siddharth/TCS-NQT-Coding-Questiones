//Program to count the number of repeating characters from a string
#include<bits/stdc++.h>

using namespace std;

void solve(string s)
{
    unordered_map<char, int> mp;
    int count = 0;
    for(char ch : s)
    {
        mp[ch]++;
    }
    for(int i = 0; i<s.length(); i++)
    {
        if(mp[s[i]] == 1)
        {
            count++;
            cout<<s[i]<<" ";
        }
    }
    cout<<"\n"<<count<<endl;
}

int main()

{
    string s;
    getline(cin, s);
    solve(s);
}