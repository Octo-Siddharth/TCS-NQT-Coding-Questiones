//Find the LCM of the numbers
#include<bits/stdc++.h>

using namespace std;

int LCM(int n1, int n2)
{
    int mini = min(n1, n2);
    int gcd;
    int lcm;
    for(int i = 1; i<=mini; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (n1*n2)/gcd;
    return lcm;
}

int main()
{
    int n1 = 4, n2 = 8;
    cout<<"The LCM of the numbers are : "<<LCM(n1, n2)<<endl;

    return 0;
}

//T.C -> O(n) S.C -> O(1)