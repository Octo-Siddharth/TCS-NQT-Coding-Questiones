//Program to Convert Octal to Decimal
#include<bits/stdc++.h>

using namespace std;

int OctToDec(int octal)
{
    int dec = 0, i = 0;
    while(octal != 0)
    {
        int rem = octal % 10;
        dec = dec + rem * pow(8, i);
        i++;
        octal = octal / 10;
    }
    return dec;
}

int main()
{
    int octal = 345;
    cout<<"The converted Octal to Decimal number is : "<<OctToDec(octal)<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(1)