//Program to remove space from a string
#include<bits/stdc++.h>

using namespace std;

void solve(string &s)
{
    int count = 0;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] != ' ')
        {
            s[count++] = s[i];
        }
    }
    s[count] = '\0';
}

int main()
{
    string s;
    getline(cin, s);

    solve(s);
    cout<<s;
}