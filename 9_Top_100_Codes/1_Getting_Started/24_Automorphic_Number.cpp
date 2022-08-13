//Program to Chcek if a number is Automorphic or not
#include<bits/stdc++.h>

using namespace std;

bool automorphic(int n)
{
    int sq = n * n;
    while(n != 0)
    {
        if(n%10 != sq%10)
        {
            return false;
        }
        n = n / 10;
        sq = sq / 10;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    if(automorphic(n))
    {
        cout<<n<<" is an automorphic number"<<endl;
    }
    else
    {
        cout<<n<<" is not an automorphic number"<<endl;
    }
}