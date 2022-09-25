//Program to reverse a string 2
#include<bits/stdc++.h>

using namespace std;

void reverseST(string s)
{
    for(int i = s.length() - 1; i>=0; i--)
    {
        cout<<s[i];
    }
}

int main()
{
    string s;
    getline(cin, s);
    reverseST(s);
}