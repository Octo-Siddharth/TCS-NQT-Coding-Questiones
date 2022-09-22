//program to remove spaces from a string
#include<bits/stdc++.h>

using namespace std;

string solve(string s)
{
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    cout<<solve(s);
}