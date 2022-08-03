//Find the GCD of the numbers
#include<bits/stdc++.h>

using namespace std;

int GCD(int n1, int n2)
{
    int mini = min(n1, n2);
    int ans;
    for(int i = 1; i<=mini; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int n1 = 4, n2 = 8;
    cout<<"The GCD of the numbers are : "<<GCD(n1, n2)<<endl;

    return 0;
}

//T.C -> O(n) S.C -> O(1)