//Program to count all the duplicate characters in a string
#include<bits/stdc++.h>

using namespace std;

void countDuplicate(string s, int n)
{
    int count[26] = {0};
    for(int i = 0; i<n; i++)
    {
        count[s[i] - 'a']++;
    }
    for(int i = 0; i<26; i++)
    {
        if(count[i] > 1)
        {
            cout<<char(i + 'a')<<" = "<<count[i]<<endl;
        }  
    }
}

int main()
{
    string s = "siddhartha rakshit";
    int n = s.length();
    cout<<"All duplaicate characters are : "<<endl;
    countDuplicate(s, n);

    return 0;
}

//T.C -> O(N) S.C -> O(1)