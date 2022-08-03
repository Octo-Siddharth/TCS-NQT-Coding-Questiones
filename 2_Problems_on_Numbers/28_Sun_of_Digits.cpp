//Find the sum of the Digits in a number
#include<bits/stdc++.h>

using namespace std;

int SumofNo(int n)
{
    int sum = 0, digit;
    while(n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n = 472;
    cout<<"Sum of Digits of a Number : "<<SumofNo(n)<<endl;

    return 0;
}

//T.C -> O(1) S.C -> O(1)