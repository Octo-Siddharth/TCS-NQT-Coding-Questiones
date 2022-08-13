//Program to find the factorial of a number
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 1;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        ans = ans * i;
    }
    cout<<"The Factorial of the Number is : "<<ans<<endl;

    return 0;
}