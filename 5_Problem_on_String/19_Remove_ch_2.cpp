//Program to remove character from first string present in the second string
#include<bits/stdc++.h>

using namespace std;

string remove(string s1, string s2, int n1, int n2)
{
    unordered_map<char, int> mp;
    string ans = "";
    for(int i = 0; i<n2; i++)
    {
        mp[s2[i]] = 1;
    }
    for(int i = 0; i<n1; i++)
    {
        if(!mp[s1[i]])
        {
            ans.push_back(s1[i]);
        }
    }
    return ans;
}

int main()
{
    string s1 = "acbedgf";
    string s2 = "cde";
    int n1 = s1.length();
    int n2 = s2.length();

    cout<<s1<<" after removing the characters "<<s2<<" = "<<remove(s1, s2, n1, n2)<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(1)