//Program to find the sumof first N natural Numbers
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout<<"The sum of N natural Number is : "<<sum;
    
    return 0;
}