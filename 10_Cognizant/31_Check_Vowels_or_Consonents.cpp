//Program to check vowels or consonents
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout<<"It is a Vowel"<<endl;
    }
    else
    {
        cout<<"It is a Consonent"<<endl;
    }
    return 0;
}

