//Program to reverse a number

#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*string s;
    cin>>s;
    reverse(s.begin(), s.end());
    cout<<s;
    */

   int n , rem, reverse = 0;
   cin>>n;
   while(n != 0)
   {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10; 
   }

   cout<<reverse;
}