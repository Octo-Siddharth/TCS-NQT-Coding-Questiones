//Program to print a star triangle
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r;
    cin>>r;
    for(int i = 1; i<=r; i++)
    {
        for(int j = 1; j<= r -i; j++)
        {
            cout<<"  ";
        }
        for(int j = 1; j<=2*i -1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}