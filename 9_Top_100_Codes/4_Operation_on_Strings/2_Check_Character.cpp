//Check if a given character is alpahabet or not
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cin>>ch;

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<ch<<" is an Alphabet"<<endl;
    }
    else
    {
        cout<<ch<<" is not an Alphabet"<<endl;
    }
}