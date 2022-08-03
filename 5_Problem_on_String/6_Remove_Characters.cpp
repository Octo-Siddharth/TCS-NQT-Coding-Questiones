//Program to remove characters except alphabet
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
    string s = "Ho@#s1i4c&^o C@at";
    int n = s.length();
    cout<<"The string after removing character except alphabet are : "<<solve(s, n)<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(1)