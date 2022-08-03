//Program to remove all dupliacte from a string
#include<bits/stdc++.h>

using namespace std;

string removeDuplicate(string s, int n)
{
    string ans = "";
    vector<bool> map(26, false);
    for(int i = 0; i<n; i++)
    {
        if(map[s[i] - 'a'] == false)
        {
            ans = ans + s[i];
            map[s[i] - 'a'] = true;
        }
    }
    return ans;
}

int main()
{
    string s = "siddhartha rakshit";
    int n = s.length();
    cout<<s<<" after removing duplicates : "<<removeDuplicate(s, n)<<endl;

    return 0;
}
//T.C -> O(N) S.C -> (1)