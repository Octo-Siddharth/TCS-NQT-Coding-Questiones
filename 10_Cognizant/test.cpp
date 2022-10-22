#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    for(int i = 0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if(s[i] >= 'a' && s[i] <='z')
        {
            count++;
        }
    }
    cout<<count;
}