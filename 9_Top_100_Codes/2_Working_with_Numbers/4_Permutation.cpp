//Program to find the number of ways that n people cna seat on r seats in a clasroom
#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int ans = 1;
    for(int i = 1; i<=n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n, r, ans;
    cin>>n>>r;
    ans = factorial(n)/factorial(n - r);

    cout<<"The possible ways are : "<<ans<<endl;

    return 0;
}