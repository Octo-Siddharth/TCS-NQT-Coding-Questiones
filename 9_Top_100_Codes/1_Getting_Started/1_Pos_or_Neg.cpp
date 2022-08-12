//Program to find the positive or negative numbers
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n >= 0)
    {
        cout<<n<<" is a positive number"<<endl;
    }
    else
    {
        cout<<n<<" is negative number"<<endl;
    }
    return 0;
}