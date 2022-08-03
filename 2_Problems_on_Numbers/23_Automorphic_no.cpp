//Check a number is an Automorphic number or not
#include<bits/stdc++.h>

using namespace std;

bool Automorphic(int n)
{
    int sq = n * n;
    while(n != 0)
    {
        if(n % 10 != sq % 10)
        {
            return false;
        }
        n = n / 10;
        sq = sq / 10;
    }
    return true;
}

int main()
{
    int n = 25;
    if (Automorphic(n))
    {
        cout<<n<<" is an Automorphic Number"<<endl;
    }
    else
    {
        cout<<n<<" is not an Automorphic Number"<<endl;
    }
}

//T.C -> O(n) S.C -> O(1) 