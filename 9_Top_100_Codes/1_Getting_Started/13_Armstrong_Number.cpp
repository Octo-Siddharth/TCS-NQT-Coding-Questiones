//Program to check Armstrong Number or not
#include<bits/stdc++.h>

using namespace std;

int isArmstrong(int n)
{
    int temp = n, count = 0, sum = 0, number = n; 
    while(temp != 0)
    {
        count++;
        temp = temp /10;
    }
    while(n != 0)
    {
        int rem = n % 10;
        sum = sum + pow(rem, count);
        n = n / 10;
    }

    return (sum == number);
}

int main()
{
    int n;
    cin>>n;
    if(isArmstrong(n))
    {
        cout<<n<<" is an Armstrong Number"<<endl;
    }
    else
    {
        cout<<n<<" is not an Armstrong Number"<<endl;
    }
}