//Check if a number is a Perfect number or not
#include<bits/stdc++.h>

using namespace std;

bool isPerfect(int &n)
{
    int sum = 0;
    for(int i = 1; i<=n-1; i++)
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
    int n = 6;
    if(isPerfect(n) == true)
    {
        cout<<n<<" is a Perfect Number";
    }
    else
    {
        cout<<n<<" is not a Perfect Number";
    }
    return 0;
}