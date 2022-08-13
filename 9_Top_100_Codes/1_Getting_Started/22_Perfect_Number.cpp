//Program to find the Perfect Number
#include<bits/stdc++.h>

using namespace std;

int perfect(int n)
{
    int sum = 0;
    for(int i = 1; i<=n - 1; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    if(perfect(n) == true)
    {
        cout<<n<<" the number is Perfect Number"<<endl;
    }
    else
    {
        cout<<n<<" the number is not a Perfect Number"<<endl;
    }
    return 0;
}