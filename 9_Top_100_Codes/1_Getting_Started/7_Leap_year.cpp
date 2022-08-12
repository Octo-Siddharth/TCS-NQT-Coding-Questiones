//Program to check Leap year or not

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int y = 0;
    cin>>y;
    if(y % 400 == 0)
    {
        cout<<y<<" is a Leap Year"<<endl;
    }
    else if(y % 100 != 0)
    {
        cout<<y<<" is not a Leap Year"<<endl;
    }
    else if(y % 4 == 0)
    {
        cout<<y<<" is a Leap Year"<<endl;
    }
    return 0;
}