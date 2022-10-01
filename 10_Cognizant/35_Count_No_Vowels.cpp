//Program to count the number of vowels
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    for(int i = 0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    cout<<"The number of vowels are : "<<count<<endl;
}