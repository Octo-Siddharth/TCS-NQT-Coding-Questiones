#include <bits/stdc++.h>

using namespace std;

int solve(string s)
{
    int count;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    getline(cin, s);
    cout << "The number of vowels are : " << solve(s) << endl;
}