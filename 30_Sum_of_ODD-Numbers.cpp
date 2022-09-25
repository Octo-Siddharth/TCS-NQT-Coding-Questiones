//Program to find the sum of odd numbers in a range
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
            cout<<i<<" ";
        }
    }
    cout<<"\nThe sum of odd numbers are : "<<sum<<endl;
}