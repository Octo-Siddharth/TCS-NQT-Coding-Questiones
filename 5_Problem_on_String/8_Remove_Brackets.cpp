//Program to remove brackets from an algebraic expression
#include<bits/stdc++.h>

using namespace std;

string solve(string s, int n)
{
    string ans;
    for(int i = 0; i<n; i++)
    {
        if(s[i] != '(' && s[i] != ')')
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main()
{
    string s = "(a+(b*c(d+e) - 4))";
    int n = s.length();
    cout<<"The algebraic expression after removing brackets is : "<<solve(s, n)<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(1)