//Program to find the largest word in a string
#include<bits/stdc++.h>

using namespace std;

string largeWord(string s, string &maxStr, int n)
{
    string tempStr;
    for(int i = 0; i<n; i++)
    {
        if(tempStr.length() > maxStr.length())
        {
            maxStr = tempStr;
        }
        if(s[i] != ' ')
        {
            tempStr = tempStr + s[i];
        }
        else
        {
            tempStr = '\0';
        }
    }
    return maxStr;
}

int main()
{
    string s = "Tata Consultancy Service";
    string maxStr;
    int n = s.length();
    cout<<"The largest word in the string is : "<<largeWord(s, maxStr, n)<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(N)