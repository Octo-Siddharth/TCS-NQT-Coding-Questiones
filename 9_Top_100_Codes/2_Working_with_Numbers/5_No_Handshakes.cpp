//Program to find the maximum number of handshakes
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans;
    cin>>n;
    ans = ((n - 1)*n)/2;
    cout<<"The number of possible ways are : "<<ans<<endl;

    return 0;
}