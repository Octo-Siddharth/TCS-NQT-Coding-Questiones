//Program to Find the HCF of two numbers
#include<bits/stdc++.h>

using namespace std;

int HCF(int n1, int n2)
{
    int mini = min(n1, n2);
    int ans;
    for(int i = 1; i<=mini; i++)
    {
        if(n1%i == 0 && n2%i == 0)
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
    cout<<"The HCF of two numbers is "<<HCF(n1, n2)<<endl;

    return 0;
}