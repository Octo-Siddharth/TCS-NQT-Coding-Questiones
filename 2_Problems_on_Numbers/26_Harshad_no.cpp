//Check if a number is Harshad (Niven) number or not
#include<bits/stdc++.h>

using namespace std;

int harshad(int n)
{
    int sum = 0;
    int temp = n;
    while(temp != 0)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }
    if(n % sum == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n = 378;
    if(harshad(n))
    {
        cout<<n<<" is a Harshad Number"<<endl;
    }
    else
    {
        cout<<n<<" is not a Harshad Number"<<endl;
    }
}

//T.C -> O(n) S.C -> O(1)