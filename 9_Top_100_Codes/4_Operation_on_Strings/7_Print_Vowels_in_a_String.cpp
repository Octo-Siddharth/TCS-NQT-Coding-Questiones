//Program to print the Vowels from a string
#include<bits/stdc++.h>

using namespace std;

void printVL(string &s)
{
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            cout<<s[i]<<" ";
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    printVL(s);

}