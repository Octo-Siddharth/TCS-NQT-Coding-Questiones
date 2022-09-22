// Program ro count the number of vowels
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i<=s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    cout << "The number of vowels are : " << count << endl;
}