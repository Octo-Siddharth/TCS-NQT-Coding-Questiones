//Program to print the vowels in a string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            cout<<s[i]<<" ";
        }
    }
    return 0;
}