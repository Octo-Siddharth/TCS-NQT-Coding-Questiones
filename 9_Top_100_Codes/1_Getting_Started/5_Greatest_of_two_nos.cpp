//Program to find the greatestof two numbers
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;
    cin>>n1>>n2;
    if(n1 > n2)
    {
        cout<<"The greatest number is :"<<n1<<endl;
    }
    else
    {
        cout<<"The greatest number is :"<<n2<<endl;
    }
    return 0;
}