//Program to print the pascals triangle
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r;
    cin>>r;
    for(int i = 1; i<=r; i++)
    {
        for(int j = 1; j< r-i+1; j++)
        {
            cout<<"  ";
        }
        int val = 1;
        for(int k = 1; k<= i; k++)
        {
            cout<<val<<"   ";
            val = val *(i - k)/k;
        }
        cout<<endl;
    }
}