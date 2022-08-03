//Find sum of N natural numbers
#include<bits/stdc++.h>

using namespace std;

void SumofNos(int n)
{
    int sum = 0;
    for(int i = 0; i<=n; i++)
    {
        sum = sum + i;
    }
    cout<<"The Sum of n natural numbers are : "<<sum;
}

int main()
{
    int n = 5;
    SumofNos(n);

    return 0;
}

//T.C -> O(n) S.C -> O(1)