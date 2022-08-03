//Program to convert Binary to Decimal
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "1011";
    int n = s.length();
    int base = 1;
    int ans = 0;
    for(int i = n - 1; i>= 0; i--)
    {
        if(s[i] == '1')
        {
            ans = ans + base;
        }
        base = base * 2; 
    }
    cout<<"The converted Binary to Decimal number is : "<<ans<<endl;

    return 0;
}

//T.C -> O(n) S.C -> O(1)