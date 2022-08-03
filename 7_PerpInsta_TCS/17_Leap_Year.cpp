/*
To check whether a year is leap or not

Step 1:

We first divide the year by 4.
If it is not divisible by 4 then it is not a leap year.
If it is divisible by 4 leaving remainder 0 
Step 2:

We divide the year by 100
If it is not divisible by 100 then it is a leap year.
If it is divisible by 100 leaving remainder 0
Step 3:

We divide the year by 400
If it is not divisible by 400 then it is a leap year.
If it is divisible by 400 leaving remainder 0 
Then it is a leap year
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cin>>year;
    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        cout<<"Year is Leap Year";
    }
    else
    {
        cout<<"Year is not a Leap Year";
    }
    return 0;
}
