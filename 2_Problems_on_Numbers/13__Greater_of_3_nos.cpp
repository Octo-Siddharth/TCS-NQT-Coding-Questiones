//Find the Greater in all three numbers
#include<bits/stdc++.h>

using namespace std;

int solve(int &n1, int &n2, int &n3)
{
    if(n1 > n2 && n1 > n3)
    {
        return n1;
    }
    else if(n2 > n3 && n2 > n1)
    {
        return n2;
    }
    return n3;
}

int main()
{
    int n1 = 1, n2 = 3, n3 = 5;
    cout<<"The greatest of all three numbers is : "<<solve(n1, n2, n3)<<endl;
    cout<<"The greatest of all three numbers is : "<<max(max(n1, n2), n3)<<endl;


    return 0;
}

//T.C ->O(1) S.C -> O(1)