//Program to replace the 0s to 1s
#include<bits/stdc++.h>

using namespace std;

int replace(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int ans = 0, temp = 1;
    while(n != 0)
    {
        int rem = n % 10;
        if( rem == 0)
        {
            rem = 1;
        }
        ans = ans + rem * temp;
        n = n / 10;
        temp = temp * 10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<"The number after replacing 0s to 1s is : "<<replace(n)<<endl;

    return 0;
}