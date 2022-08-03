//Find the factorial of nth terms
#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int ans = 1;
    for(int i = 1; i<=n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n = 5;
    cout<<"The Factorial of "<<n<<" is : "<<factorial(n)<<endl;

    return 0;
}

//T.C -> O(n) S.C -> O(1)