//Program to check if a yar is leap year or not
#include<bits/stdc++.h>
using namespace std;

bool checkLeap(int year)
{
    if(year % 400 == 0)
    {
        return true;
    }
    else if(year % 100 == 0)
    {
        return false;
    }
    else if(year % 4 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int year;
    cin>>year;

    if(checkLeap(year))
    {
        cout<<year<<" is a Leap Year"<<endl;
    }
    else
    {
        cout<<year<<" is not a Leap Year"<<endl;
    }
}
