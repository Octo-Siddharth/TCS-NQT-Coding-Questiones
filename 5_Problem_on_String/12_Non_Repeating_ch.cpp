//Program to find the non repeating characters in a string
#include<bits/stdc++.h>

using namespace std;

void nonRepeatch(string s, int n, int freq[256])
{
    for(int i = 0; i<n; i++)
    {
        if(s[i] == ' ')
        {
            continue;
        }
        else
        {
            freq[s[i] - 'a']++;
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(freq[s[i] - 'a'] == 1 && s[i] != ' ')
        {
            cout<<s[i]<<" ";
        }
    }  
}

int main()
{
    string s = "siddhartha rakshit";
    int n = s.length();
    int freq[256] = {0};

    cout<<"The non repeating characters are : ";
    nonRepeatch(s, n, freq);

    return 0;
}

//T.C -> (N) S.C -> O(N)