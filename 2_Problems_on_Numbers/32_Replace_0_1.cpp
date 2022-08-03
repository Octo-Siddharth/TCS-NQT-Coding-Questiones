//Find ans replace 0 with 1 in a number
#include<bits/stdc++.h>

using namespace std;

int replace(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int ans = 0, temp = 1, digit;
    while(n != 0)
    {
        digit = n % 10;
        if( digit == 0)
        {
            digit = 1;
        }
        ans = digit * temp + ans;
        n = n / 10;
        temp = temp * 10;
    }
    return ans;
}

int main()
{
    int n = 102003;
    cout<<"The "<<n<<" after replacing all zeroes becomes : "<<replace(n)<<endl;

    return 0;
}

//T.C -> O(n) S.C -> O(1)