//Program to reverse a sstring without using stl
#include<bits/stdc++.h>

using namespace std;
void rev(string s, int n)
{
    for(int i = n - 1;i>=0; i--)
    {
        cout<<s[i];
    }
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    cout<<"The reverse of the string is : ";
    rev(s, n);
}