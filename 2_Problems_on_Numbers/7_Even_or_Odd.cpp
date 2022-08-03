//Check if a number is even or odd
#include<bits/stdc++.h>

using namespace std;

bool isEvenOdd(int n)
{
    for(int i = 0; i<n; i++)
    {
        if(n % 2 == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n = 5;
    if(isEvenOdd(n) == true)
    {
        cout<<n<<" is a even number";
    }
    else
    {
        cout<<n<<" is an odd number";
    }
    return 0;
}

//T.C -> O(n) S.C -> O(1)