//Program to find the Harshad Mehta Number
#include<bits/stdc++.h>

using namespace std;

int harshad(int &n)
{
    int temp = n, sum = 0;
    while(temp != 0)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }
    return sum;

}

int main()
{
    int n;
    cin>>n;
    if(harshad(n))
    {
        cout<<n<<" is a Harshad Number"<<endl;
    }
    else
    {
        cout<<n<<" is not a Harshad Number"<<endl;
    }
}