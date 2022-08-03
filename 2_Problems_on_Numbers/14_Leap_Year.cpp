//Check if a year is Leap Year or not
#include<bits/stdc++.h>

using namespace std;

bool LeapYear(int &year)
{
    if(year % 400 == 0)
    {
        return true;
    }
    if(year % 100 == 0)
    {
        return false;
    }
    if(year % 4 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int year = 1996;
    if(LeapYear(year))
    {
        cout<<"It is a Leap Year"<<endl;
    }
    else
    {
        cout<<"It is not a Leap Year"<<endl;
    }
    return 0;
}

//T.C -> O(1) S.C -> O(1)