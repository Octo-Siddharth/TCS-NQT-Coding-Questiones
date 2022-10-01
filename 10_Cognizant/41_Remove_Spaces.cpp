//Program to remove the Spaces from a string
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
    cout<<"The string after removing the spaces are : "<<solve(s)<<endl;
}