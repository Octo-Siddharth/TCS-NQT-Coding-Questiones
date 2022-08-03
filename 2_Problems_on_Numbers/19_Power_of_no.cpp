//Find the power of a number
#include<bits/stdc++.h>

using namespace std;

int power(int n, int k)
{
    int ans = 1;
    for(int i = 0; i<k; i++)
    {
        ans = ans * n;
    }
    return ans;
}

int main()
{
    int n = 2, k = 3;
    cout<<"The power of the number is : "<<power(n, k)<<endl;

    return 0; 
}

//T.C -> O(n) S.c -> O(1)