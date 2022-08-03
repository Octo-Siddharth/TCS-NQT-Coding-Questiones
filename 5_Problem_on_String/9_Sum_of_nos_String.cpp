//Program to find the sum of numbers in a string
#include<bits/stdc++.h>

using namespace std;

int sum(string s, int n)
{
    string tempsum = "";
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            tempsum = tempsum + s[i];
        }
        else
        {
            sum = sum + atoi(tempsum.c_str());
            tempsum = "";
        }
    }
    return sum + atoi(tempsum.c_str());
}

int main()
{
    string s = "12edfr12";
    int n = s.length();
    cout<<"The sum of numbers present inside the string is : "<<sum(s, n)<<endl;

    return 0;
}

//T.c -> O(N) S.C -> O(N)