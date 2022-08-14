// Program to find the addition of two fractions
#include <bits/stdc++.h>

using namespace std;

int hcf(int n1, int n2)
{
    int mini = min(n1, n2);
    int ans;
    for (int i = 1; i <= mini; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            ans = i;
        }
    }

    return ans;
}

void AdditionFrac(int &n3, int &d3)
{
    int _gcd = hcf(n3 , d3);
    n3 = n3 / _gcd;
    d3 = d3 / _gcd;
}

int main()
{
    int n1, n2, d1, d2, num3, den3;
    cin >> n1 >> d1 >> n2 >> d2;
    int lcm = (d1*d2)/hcf(d1, d2);

    den3 = lcm;
    num3 = n1*(den3/d1) + n2*(den3/d2);

    AdditionFrac(n1, d1);

    cout<<n1<<"/"<<d1<<" + "<<n2<<"/"<<d2<<" = "<<num3<<"/"<<den3<<endl;

    return 0;

}