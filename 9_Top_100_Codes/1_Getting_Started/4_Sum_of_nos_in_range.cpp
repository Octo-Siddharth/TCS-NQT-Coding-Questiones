//Program to find the number in a  given range
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int min, max, sum = 0;
    cin>>min>>max;
    for(int i = min; i<=max; i++)
    {
        sum=sum+i;
    }

    cout<<"The sum of numbers in given range is : "<<sum<<endl;
    return 0;
}