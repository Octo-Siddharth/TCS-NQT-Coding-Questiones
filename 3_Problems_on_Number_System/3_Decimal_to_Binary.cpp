//Program to convert Decimal to Binary
#include<bits/stdc++.h>

using namespace std;

void DecToBin(int n)
{
    int bin[32];
    int i = 0;
    while(n != 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j = i - 1; j>= 0; j--)
    {
        cout<<bin[j];
    }
}

int main()
{
    int n = 17;
    cout<<"The converted Decimal to Binary number is :";
    DecToBin(n);
    return 0;
}

//T.C -> O(logN) S.C -> O(1)