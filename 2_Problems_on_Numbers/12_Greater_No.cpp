//Find the greater betrween two numbers
#include<bits/stdc++.h>

using namespace std;

int solve(int &n1, int &n2)
{
    if(n1 > n2)
    {
        return n1;
    }

    return n2;
}

int main()
{
    int n1 = 2, n2 = 3;
    cout<<"The Greater number is : "<<solve(n1, n2)<<endl;
    cout<<"The Greater number is : "<<max(n1, n2)<<endl;


    return 0;
}

//T.C -> O(1) S.C -> O(1)