/*
Problem Statement (Word is Key)
One programming language has the following keywords that cannot be used as identifiers:

break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var

Write a program to find if the given word is a keyword or not

Test cases
Case 1
Input – defer
Expected Output – defer is a keyword
Case 2
Input – While
Expected Output – while is not a keyword
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[16][10] = {"break", "case", "continue", "default", "defer", "else","for", 
    "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    char st[16];
    int temp = 0;
    cin>>st;
    for(int i = 0; i<16; i++)
    {
        if(strcmp(st, str[i]) == 0)
        {
            temp = 1;
            break;
        }
    }

    if(temp == 1)
    {
        cout<<st<<" is a keyword"<<endl;
    }
    else
    {
        cout<<st<<" is not a keyword"<<endl;
    }
    return 0;
}