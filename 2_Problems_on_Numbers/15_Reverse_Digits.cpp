//Reverse Digit of a number
#include<bits/stdc++.h>

using namespace std;

int reverse(int &n)
{
    int digit , rev = 0;
    while(n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n = 123;
    int ans = reverse(n);
    cout<<"The reverse digit of the number is : "<<ans<<endl;
    return 0;
}

//T.C -> O(1) S.C -> O(1)