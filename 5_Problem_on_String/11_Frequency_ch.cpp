//Program to count all the frequency of the characters present in a string
#include<bits/stdc++.h>

using namespace std;

void countCh(string s, int n)
{
    int freq[26] = {0};
    for(int i = 0; i<n; i++)
    {
        freq[s[i] - 'a']++;
    } 
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            cout<<char(i + 'a')<<" = "<<freq[i]<<" ";
        }
    }
}

int main()
{
    string s = "siddhartharakshit";
    int n = s.length();

    countCh(s, n);

    return 0;
}

//T.C -> O(N) S.C -> O(1)