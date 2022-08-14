//Program to find the number of occurenceof a digit in a number
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, digit, count = 0;
    cin>>n>>digit;
    while(n > 0)
    {
        int rem = n % 10;
        if(rem == digit)
        {
            count++;
        }
        n = n / 10;
    }

    cout<<"The number of "<<digit<<" is "<<count<<endl;

    return 0;
}