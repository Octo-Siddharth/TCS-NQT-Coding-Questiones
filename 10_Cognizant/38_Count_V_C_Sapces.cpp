//Program to count the number of vowels consonents and spaces
#include<bits/stdc++.h>

using namespace std;

void solve(string s)
{
    int count_V = 0 , count_C = 0, count_S = 0;
    for(int i = 0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count_V++;
        }
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            count_C++;
        }
        else if(s[i] == ' ')
        {
            count_S++;
        }
    }
    cout<<"The number of Vowels are     : "<<count_V<<endl;
    cout<<"The number of Consonents are : "<<count_C<<endl;
    cout<<"The number of Spaces are     : "<<count_S<<endl;
}

int main()
{
    string s;
    getline(cin, s);
    solve(s);
}