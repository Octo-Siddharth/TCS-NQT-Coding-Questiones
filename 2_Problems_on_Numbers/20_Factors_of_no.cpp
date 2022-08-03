//Find the factors of a given numbers
#include<bits/stdc++.h>

using namespace std;

void factors(int &n)
{
    for(int i = 1; i<=n; i++)
    {
        if(n % i == 0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n = 6;
    cout<<"The factors of a given number is : ";
    factors(n);

    return 0;
}

//T.C -> O(n)  S.C -> O(1)