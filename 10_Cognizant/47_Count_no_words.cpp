//Program to count the number of words from a string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count_w = 0;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            count_w++;
        }
    }
    count_w = count_w + 1;
    cout<<"The number of words in the string is : "<<count_w<<endl;
}