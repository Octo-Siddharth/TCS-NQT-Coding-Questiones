//Check if a number is Strong Number or not (Krishnamurty Number)
#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i<=n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int isStrongNo(int n)
{
    int sum = 0;
    while(n != 0)
    {
        int digit = n % 10;
        sum = sum + factorial(digit);
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n = 145;
    int ans =isStrongNo(n);
    if(ans == n && n != 0)
    {
        cout<<"It is a Strong number"<<endl;
    }
    else
    {
        cout<<"It is not a Strong number"<<endl;
    }
}

//T.C -> O(N*M) S.C -> O(1)