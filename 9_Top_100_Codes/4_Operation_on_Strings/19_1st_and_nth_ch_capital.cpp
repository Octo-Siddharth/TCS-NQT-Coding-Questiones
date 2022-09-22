//Program to cpaitalize the first and the last character
#include<bits/stdc++.h>

using namespace std;

void upperCase(string s, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(i == 0 || i == (n - 1))
        {
            s[i] = toupper(s[i]);
        }
        else if(s[i] == ' ')
        {
            s[i - 1] = toupper(s[i - 1]);
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    cout<<"The new string with First ch and Last ch capital is : "<<s<<endl;
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    upperCase(s, n);
}