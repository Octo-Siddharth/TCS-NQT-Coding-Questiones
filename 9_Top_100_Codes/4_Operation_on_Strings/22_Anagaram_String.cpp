// Program to check if two string are anagarm or not
#include <bits/stdc++.h>

using namespace std;

bool anagarm(string s1, string s2)
{
    int n1 = s1.length(), n2 = s2.length();
    if (n1 != n2)
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if (anagarm(s1, s2))
    {
        cout << s1 << " and " << s1 << " are anagarm" << endl;
    }
    else
    {
        cout << s1 << " and " << s1 << " are not anagarm" << endl;
    }
}