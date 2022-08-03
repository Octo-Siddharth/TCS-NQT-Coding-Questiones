//Permutations in which N people can occupy R seats
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

int main()
{
    int n = 6, r = 4;
    int num = factorial(n);
    int den = factorial(n - r);

    cout<<"The number of ways that the seating arrangements can be done : "<<num/den<<endl;

    return 0;
}

//T.C -> O(n) S.C -> O(1)