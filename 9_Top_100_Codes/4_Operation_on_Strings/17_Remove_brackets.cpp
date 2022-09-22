//Program to remove brackets from a equation
#include<bits/stdc++.h>

using namespace std;

string solve(string s)
{
    string ans;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] != '(' && s[i] != ')')
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    cout<<"The equation after removing the brackets are : "<<solve(s)<<endl;
}