//Program to find the Fibonacci Series upto n terms
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a = 0, b = 1;
    cin>>n;
    cout<<"The Fibonacci Series upto n terms is : ";
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i<=n; i++)
    {
        int next_no;
        next_no = a + b;
        cout<<next_no<<" ";
        a = b;
        b = next_no;
    }
}