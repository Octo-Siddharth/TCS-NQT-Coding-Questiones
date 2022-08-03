//Program to find the maximum occuring character in a string
#include<bits/stdc++.h>

using namespace std;

char countMaxCh(string s, int n)
{
    char ans;
    int maxfreq = 0;
    char count[256] = {0};

    for(int i = 0; i<n; i++)
    {
        count[s[i]]++;
        if(count[s[i]] > maxfreq)
        {
            maxfreq = count[s[i]];
            ans = s[i];
        }
    } 
    return ans;
}

int main()
{
    string s = "Siddhartha Rakshit";
    int n = s.length();
    cout<<"The maximum occuring character in the string is : "<<countMaxCh(s, n)<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(1)