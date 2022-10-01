//Program to remove characters from a string
#include<bits/stdc++.h>

using namespace std;

string solve(string s)
{
    string ans;
    for(int i = 0; i<s.length(); i++)
    {
        int ascii = int(s[i]);
        if((ascii >= 'a' && ascii <= 'z') || (ascii >= 'A' && ascii <= 'Z'))
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
    cout<<"The string after removing characters are : "<<solve(s)<<endl;
}