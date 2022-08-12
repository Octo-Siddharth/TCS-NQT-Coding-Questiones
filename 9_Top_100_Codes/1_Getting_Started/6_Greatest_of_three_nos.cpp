//Program to find the greatest of three numbers
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    if(n1 > n2 && n1 > n3)
    {
        cout<<"The greatest number is "<<n1<<endl;
    }
    else if(n2 > n1 && n2 > n3)
    {
        cout<<"The greatest number is "<<n2<<endl;
    }
    else
    {
        cout<<"The greatest number is "<<n3<<endl;
    }
    return 0;
}