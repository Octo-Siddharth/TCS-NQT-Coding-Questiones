//Program to swap two numbers without using third variables
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"a = "<<a<<" b = "<<b<<endl;
}