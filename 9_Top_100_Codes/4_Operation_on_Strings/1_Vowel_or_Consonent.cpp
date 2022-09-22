//Program to check if the given character is a vowel or string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout<<ch<<" is a Vowel"<<endl;
    }
    else
    {
        cout<<ch<<" is a Consonent"<<endl;
    }
}