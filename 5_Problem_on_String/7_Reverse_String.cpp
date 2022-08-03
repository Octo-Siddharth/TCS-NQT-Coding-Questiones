//Program to Reverse a string
#include<bits/stdc++.h>

using namespace std;

void reverse(string s , int n)
{
    for(int i = n - 1; i>= 0; i--)
    {
        cout<<s[i];
    }
}

int main()
{
    string s = "Stepan The Cat";
    int n = s.length();
    //reverse(s.begin(), s.end());
    cout<<"The string after reversing : ";// simple call s for reverse function
    reverse(s, n);
    return 0;
}

//Using reverse function T.C -> O(N) S.C -> O(1)
//Using Travesing the strinh T.C -> O(N) S.C -> O(1)