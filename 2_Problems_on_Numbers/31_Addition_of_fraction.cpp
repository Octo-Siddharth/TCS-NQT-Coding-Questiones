//Program to Add two fractions
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int mini = min(a, b);
    int ans;
    for(int i = 1; i<=mini; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

void addFracton(int &num3, int &den3)
{
    int _gcd = gcd(num3, den3);

    num3 = num3 / _gcd;
    den3 = den3 / _gcd;
}

int main()
{
    int num1 = 3, den1 = 4, num2 = 1, den2 = 7, num3, den3;
    int lcm = (den1 * den2)/gcd(den1, den2);

    den3 = lcm;
    num3 = num1 * (den3 / den1) + num2 * (den3 / den2);

    addFracton(num1, den1);

    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<den3<<endl;

    return 0;
}
//T.C -> O(log(min(den1, den2))) S.C -> O(1)