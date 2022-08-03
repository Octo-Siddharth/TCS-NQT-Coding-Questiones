/*
Sweet Seventeen Problem Statement
Given a maximum of four digit to the base 17 (10 – A, 11 – B, 12 – C, 13 – D … 16 – G} as input, output its decimal value.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int dec = 0;
    int k = s.length() - 1;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == 'A')
        {
            dec = dec + 10 * pow(17, k);
            k--;
        }
        else if (ch == 'B')
        {
            dec = dec + 11 * pow(17, k);
            k--;
        }
        else if (ch == 'C')
        {
            dec = dec + 12 * pow(17, k);
            k--;
        }
        else if (ch == 'D')
        {
            dec = dec + 13 * pow(17, k);
            k--;
        }
        else if (ch == 'E')
        {
            dec = dec + 14 * pow(17, k);
            k--;
        }
        else if (ch == 'F')
        {
            dec = dec + 15 * pow(17, k);
            k--;
        }
        else if (ch == 'G')
        {
            dec = dec + 16 * pow(17, k);
            k--;
        }
        else
        {
            dec = dec + (int(s[i]) - 48) * pow(17, k);
            k--;
        }
    }
    cout << dec;
}