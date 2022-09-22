//Program to count all vowels, consonents and white spaces from a string
#include<bits/stdc++.h>

using namespace std;

void solve(string &s)
{
    int vowels = 0, consonents = 0, white_spaces = 0;
    for(int i = 0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowels++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            consonents++;
        }
        else if(s[i] == ' ')
        {
            white_spaces++;
        }
    }
    cout<<"The number of vowels are       : "<<vowels<<endl;
    cout<<"The number of consonents are   : "<<consonents<<endl;
    cout<<"The number of white spaces are : "<<white_spaces<<endl;
}

int main()
{
    string s;
    getline(cin, s);
    solve(s);
}