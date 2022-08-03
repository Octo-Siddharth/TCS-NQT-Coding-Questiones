//Check if a number is an Armstrong number or not
#include<bits/stdc++.h>

using namespace std;

bool isArmstrong(int n)
{
    int temp = n;
    int count = 0;
    int number = n;
    int sum = 0;

    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    while(n != 0)
    {
        int digit = n % 10;
        sum = sum + pow(digit, count);
        n = n / 10;
    }
    return (sum == number);
}

int main()
{
    int n = 153;

    if(isArmstrong(n))
    {
        cout<<n<<" is an Armstrong number";
    }
    else
    {
        cout<<n<<" is not an Armstrong number";
    }
}

//T.C O(N)  S.C O(1)