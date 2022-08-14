//Program to find the LCM of two numbers 
#include<bits/stdc++.h>

using namespace std;

int LCM(int n1, int n2)
{
    int mini = min(n1, n2);
    int gcd, lcm;
    for(int i = 1; i<=mini; i++)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            gcd = i;
        }
    }
    lcm = (n1*n2)/gcd;

    return lcm;
}

int main()
{
    int n1, n2;
    cin>>n1>>n2;
    cout<<"The LCM of the two numbers is "<<LCM(n1, n2)<<endl;

    return 0;
}