//Program to convert the lower case letters to upper and viceversa
#include<bits/stdc++.h>

using namespace std;

void convertStr(string s, int n)
{
    for(int i = 0; i<n; i++)
    {
        int ascii = int(s[i]);
        if(ascii >= 65 && ascii <= 90)
        {
            s[i] = tolower(s[i]);
        }
        else if(ascii >= 97 && ascii <= 122)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout<<s<<" ";
}

int main()
{
    string s = "Hosico Cat";
    int n = s.length();

    cout<<"The converted string is : ";
    convertStr(s, n);

    return 0; 
}

//T.C -> O(N) S.C -> O(1)