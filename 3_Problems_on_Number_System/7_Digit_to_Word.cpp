//Program to Convert Digits to Word
#include<bits/stdc++.h>

using namespace std;

string ones[] = {"", "one", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen ", "Fourteen ", "Fifteen ",
                 "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};

string tens[] = {"", "", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety"};

string NumToWords(int n, string s)
{
    string str = "";
    if(n>19)
    {
        str = str + tens[n / 10] + ones[n % 10];
    }
    else
    {
        str = str + ones[n];
    }
    if(n)
    {
        str = str + s;
    }
    return str;
}

string DigitToWord(long n)
{
    string out;
    out = out +  NumToWords((n / 10000000), " crore ");
    out = out + NumToWords(((n / 100000) % 100), " lakh "); 
    out = out + NumToWords(((n / 1000) % 100), " thousand ");   
    out = out + NumToWords(((n / 100) % 10), " hundred "); 

    if(n > 100 && n % 10)
    {
        out = out + "and ";
    } 
    out = out + NumToWords((n % 100), "");

    if(out == "")
    {
        out = "zero ";
    } 
    return out;
};

int main()
{
    long n = 9090;
    cout<<n<<" = "<<DigitToWord(n)<<endl;

    return 0;
}

//T.C -> O(1) S.C -> O(1)