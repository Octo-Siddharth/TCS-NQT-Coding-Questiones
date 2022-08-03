//Program to make the First and The Last Characters in a String to Upper Caee
#include<bits/stdc++.h>

using namespace std;

void UpperCase(string s, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(i == 0 || i == (n - 1))
        {
            s[i] = toupper(s[i]);
        }
        else if(s[i] == ' ')
        {
            s[i - 1] = toupper(s[i - 1]);
            s[i + 1] = toupper(s[i + 1]);
        }
    }

    cout<<"String after changing the First and the Last letter to uppercase is : "<<s<<endl;
}

int main()
{
    string s = "india is in my heart";
    int n = s.length();

    UpperCase(s, n);

    return 0; 
}

//T.C -> O(N) S.C -> O(1)