//Program to check if the given two strings are anagarm of the first string or not
#include<bits/stdc++.h>

using namespace std;

//Approach 1
/*
bool anagram(string s1, string s2, int n1, int n2)
{
    if(n1 != n2)
    {
        return false;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for(int i = 0; i<n1; i++)
    {
        if(s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}
*/
//Approach 2

bool anagram(string s1, string s2, int n1, int n2)
{
    if(n1 != n2)
    {
        return false;
    }

    int freq[26] = {0};

    for(int i = 0; i<n1; i++)
    {
        freq[s1[i] - 'a']++;
    }
    for(int i = 0; i<n2; i++)
    {
        freq[s2[i] - 'a']--;
    }
    for(int i = 0; i<26; i++)
    {
        if(freq[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1 = "cat";
    string s2 = "act";
    int n1 = s1.length();
    int n2 = s2.length();

    if(anagram(s1, s2, n1, n2))
    {
        cout<<s2<<" is an anagram of "<<s1<<endl;
    }
    else
    {
        cout<<s2<<" is not an anagram of "<<s1<<endl;
    }

    return 0;
}
//Approcah 1 T.C -> O(nlogn) S.C -> O(1)
//Approach 2 T.C -> O(N) S.C -> O(1)  