//Program to Convert Decimal to Octal
#include<bits/stdc++.h>

using namespace std;

int DectoOct(int n)
{
    int octal = 0, i = 0;
    while(n != 0)
    {
        int rem = n % 8;
        octal = octal + rem * pow(10, i);
        i++;
        n = n / 8;
    }
    return octal;
}

int main()
{
    int n = 136;
    cout<<"The converted Decimal to Octal number is : "<<DectoOct(n)<<endl;

    return 0;
}

//T.C -> O(logn) S.C -> O(1)