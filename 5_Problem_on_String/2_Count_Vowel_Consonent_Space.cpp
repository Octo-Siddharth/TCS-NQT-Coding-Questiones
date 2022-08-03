//Program to count the number of Vowels, Consonents, and white spaces
#include<bits/stdc++.h>

using namespace std;

void solve(string s, int n)
{
    int vowels =0, consonents = 0, white_space = 0;
    //Convert the string into lower case 
    for(int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }

    for(int i = 0; i<n; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowels++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            consonents++;
        }
        else if(s[i] == ' ')
        {
            white_space++;
        }
    }

    cout<<"The number of Vowels are : "<<vowels<<endl;
    cout<<"The number of Consonents are : "<<consonents<<endl;
    cout<<"The of White Spaces are : "<<white_space<<endl;
}

int main()
{
    string s = "India is in my Heart";
    int n = s.length();
    solve(s, n);

    return 0;
}

//T.C -> O(N) S.C -> O(1)