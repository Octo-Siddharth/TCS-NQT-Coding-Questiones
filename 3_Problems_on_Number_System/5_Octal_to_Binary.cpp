//Program to convert Octal to Binary
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

int DecToBin(int decimal)
{
    int bin = 0, i = 0;
    while(decimal != 0)
    {
        int rem = decimal % 2;
        bin = bin + rem * pow(10, i);
        i++;
        decimal = decimal / 2;
    }
    return bin;
}

int main()
{
    int octal = 345;
    int decimal = OctToDec(octal);
    cout<<"The converted Octal to Binary number is : "<<DecToBin(decimal)<<endl;

    return 0;
}

//T.C -> O(logN) S.C -> O(1)