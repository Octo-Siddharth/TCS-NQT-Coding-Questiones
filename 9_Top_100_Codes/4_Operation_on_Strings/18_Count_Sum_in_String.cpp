//Program to count the sumof numbers in a string
#include<bits/stdc++.h>

using namespace std;

int sum(string s)
{
    int sum = 0;
    for(char ch : s)
    {
        if(isdigit(ch))
        {
            sum = sum + (ch - '0');
        }
    }
    return sum;
}

int main()
{
    string s;
    getline(cin, s);
    cout<<"The sum of the numeber is : "<<sum(s)<<endl;
}
