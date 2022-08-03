//Program to Change every letter in a string with next lexicographic alphabet
#include<bits/stdc++.h>

using namespace std;

string solve(string s, int n)
{
    for(int i = 0; i<n; i++)
    {
        int ascii = int(s[i]);
        if(ascii == 90)
        {
            s[i] = char(65);
        }
        else if(ascii == 122)
        {
            s[i] = char(97);
        }
        else if (ascii >= 65 && ascii < 90 || ascii >= 97 && ascii < 122)
        {
            s[i] = char(ascii + 1);
        }
    }
    return s;
}

int main()
{
    string s = "abcdxyz";
    int n = s.length();
    cout<<s<<" after changing all letters : "<<solve(s, n)<<endl;

    return 0;
}
//T.C -> O(N) S.C -> O(1)