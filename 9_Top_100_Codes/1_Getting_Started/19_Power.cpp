//Program to find the power of a number
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b, e, ans = 1;
    cin>>b>>e;

    for(int i = 0; i<e; i++)
    {
        ans = ans * b;
    }

    cout<<"The power of the number is : "<<ans;
}