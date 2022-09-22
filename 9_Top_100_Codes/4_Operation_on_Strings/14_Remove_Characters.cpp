//program to remove the characters from a string
#include<bits/stdc++.h>

using namespace std;

string solve(string s, int n)
{
    string ans;
    for(int i = 0; i<n; i++)
    {
        int ascii = int(s[i]);
        if((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    cout<<"After removing others characters except alphabets : "<<solve(s, n)<<endl;
}