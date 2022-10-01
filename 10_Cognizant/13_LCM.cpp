//Program to find the LCM of numbers
#include<bits/stdc++.h>

using namespace std;

int lcm(int n1, int n2)
{
    int mini = min(n1, n2), hcf, lcm;
    for(int i = 1; i<=mini; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (n1*n2)/hcf;
    return lcm;
}

int main()
{
    int n1, n2;
    cin>>n1>>n2;
    cout<<"The LCM of the numbers are : "<<lcm(n1, n2)<<endl;
}