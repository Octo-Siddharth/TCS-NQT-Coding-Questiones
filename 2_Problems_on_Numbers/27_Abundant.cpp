//Chcek if the number is an Abundant Number or not
#include<bits/stdc++.h>

using namespace std;

int abundant(int n)
{
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    sum = sum - n;
    if(sum > n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n = 18;
    if(abundant(n))
    {
        cout<<n<<" is an Abundant Number"<<endl;
    }
    else
    {
        cout<<n<<" is not an Abundant Number"<<endl;
    }
}

//T.C -> O(n) S.C -> O(1)