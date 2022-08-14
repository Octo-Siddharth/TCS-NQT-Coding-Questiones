//Program to find number of integers which has exactly x divisors
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x,count = 0;
    cin>>n>>x;
    for(int i = 1; i<=n; i++)
    {
        int cnt_fact = 0;
        for(int j = 1; j<=sqrt(i); j++)
        {
            if(i%j == 0)
            {
                if(i/j != j)
                {
                    cnt_fact = cnt_fact + 2;
                }
                else
                {
                    cnt_fact++;
                }
            }
        }
        if(cnt_fact == x)
        {
            count++;
        }

    }
    cout<<count<<endl;

    return 0;
}
