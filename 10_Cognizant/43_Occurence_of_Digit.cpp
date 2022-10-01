//Program to finf thr occurance of digit
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, digit, count = 0, rem = 0;;
    cin>>n>>digit;
    while(n != 0)
    {
        rem = n % 10;
        if(rem == digit)
        {
            count++;
        }
        n = n / 10;
    }
    cout<<"The number of "<<digit<<" is "<<count<<endl;
}