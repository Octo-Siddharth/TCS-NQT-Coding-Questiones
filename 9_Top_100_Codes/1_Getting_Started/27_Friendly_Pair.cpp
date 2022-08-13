//program to check if the given two number are friendly pair or not
#include<bits/stdc++.h>

using namespace std;

int getDivisor(int n)
{
    int sum = 0;
    for(int i = 1; i<n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int n1, n2, sum1, sum2;
    cin>>n1>>n2;
    sum1 = getDivisor(n1);
    sum2 = getDivisor(n2);
    if((sum1/n1) == (sum2/n2))
    {
        cout<<n1<<" and "<<n2<<" is a Friendly Pair"<<endl;
    }
    else
    {
        cout<<n1<<" and "<<n2<<" is not a Friendly Pair"<<endl;
    }
    return 0;
}