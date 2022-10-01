//Program to remove Brackets
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
    cout<<"The expression after removing brackets are : "<<solve(s)<<endl;

}