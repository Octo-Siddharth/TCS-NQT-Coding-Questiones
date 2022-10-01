//Program to check if it is a character or not
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<ch<<" is a character"<<endl;
    }
    else
    {
        cout<<ch<<" is not a character"<<endl;
    }
    return 0;
}