//Program to count the number of words in string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Tata Consultancy Service";
    int n = s.length();
    int space = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == ' ')
        {
            space = space + 1;
        }
    }
    cout<<"The number of words present in the string are : "<<space + 1<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(1)