//Program to remove vowel from a string 
#include<bits/stdc++.h>

using namespace std;

string solve(string s, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            s = s.substr(0, i) + s.substr(i + 1);
            i--;
        }
    }
    return s;
}
int main()
{
    string s = "Siddhartha Rakshit";
    int n = s.length();
    cout<<"The string after removing all vowels is : "<<solve(s, n)<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(1)