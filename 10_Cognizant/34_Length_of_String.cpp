//Program to chcek the length of a string without using strlen
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    cin>>s;
    int length = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    cout<<"The Length is : "<<length<<endl;
}