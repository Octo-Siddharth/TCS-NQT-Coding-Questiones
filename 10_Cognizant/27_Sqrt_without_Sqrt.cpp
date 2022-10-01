//Program to find the squareroot without using sqrt
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double error = 0.00001;
    double s, num;
    cin>>num;
    s = num;
    while((s - num / s) > error)
    {
        s = (s+num/s)/2;
    }
    cout<<s<<endl;

}