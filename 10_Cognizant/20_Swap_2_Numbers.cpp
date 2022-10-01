//Program to swap two numbers
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2, temp;
    cin>>n1>>n2;
    cout<<"Number 1 = "<<n1<<" Number 2 = "<<n2<<endl;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout<<"Number 1 = "<<n1<<" Number 2 = "<<n2<<endl;
}