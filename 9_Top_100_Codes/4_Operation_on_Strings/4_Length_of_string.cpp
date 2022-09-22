//Program to find the length of the string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    cin>>s;
    int length = 0;
    for(int i = 0; s[i]!= '\0';i++)
    {
        length++;
    }

    cout<<"The length of the string "<<s<<" is : "<<length<<endl;
}