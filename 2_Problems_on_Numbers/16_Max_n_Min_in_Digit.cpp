//Maximum number and Minimum number in a digit
#include<bits/stdc++.h>

using namespace std;

void MaxMinNo(int n)
{
    int digit, mini = INT_MAX, maxi = INT_MIN;
    while(n != 0)
    {
        digit = n % 10;
        mini = min(mini, digit);
        maxi = max(maxi, digit);
        n = n / 10;
    }
    cout<<"Minimum number is : "<<mini<<endl;
    cout<<"Maximum number is : "<<maxi<<endl;
}

int main()
{
    int n = 2731;
    MaxMinNo(n);

    return 0;
}

// T.C -> O(1) S.C -> O(1) 