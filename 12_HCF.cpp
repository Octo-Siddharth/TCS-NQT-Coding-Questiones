//Find the HCF/GCD of two numbers
#include<bits/stdc++.h>

using namespace std;

int hcf(int n1, int n2)
{
    int mini = min(n1, n2), ans;
    for(int i = 0; i<=mini; i++)
    {
        if(n1 % 1 == 0 && n2 % 1 == 0)
        {
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int n1, n2;
    cin>>n1>>n2;
    cout<<"The HCF of the numbers are : "<<hcf(n1, n2)<<endl;
    return 0;
}