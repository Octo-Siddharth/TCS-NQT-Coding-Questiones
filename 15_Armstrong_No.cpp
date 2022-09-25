//Program to find check if a number is armstrong number or not
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp, rem, ans = 0;
    cin>>n;
    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        ans = ans + rem*rem*rem;
        temp = temp / 10;
    }
    if(n == ans)
    {
        cout<<n<<" is an Armstrong Number"<<endl;
    }
    else
    {
        cout<<n<<" is not an Armstrong Number"<<endl;
    }
}