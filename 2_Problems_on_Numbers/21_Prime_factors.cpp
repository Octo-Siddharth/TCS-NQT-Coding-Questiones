//Find all Prime factors of a given number
#include<bits/stdc++.h>

using namespace std;

void primefactor(int &n)
{
    cout<<"The prime factors are : ";
    for(int i = 2; i>1; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                cout<<i<<" ";
                n = n / i;
            }
        }
    }
}

int main()
{
    int n = 60;
    primefactor(n);

    return 0;
}

//T.C -> O(n) S.C -> O(1)