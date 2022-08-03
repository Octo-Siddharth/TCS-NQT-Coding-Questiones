//Find the Arithmetic Progression Series of n terms
#include<bits/stdc++.h>

using namespace std;

float APSeries(float a, float d, int n)
{
    float sum = 0;
    for(int i = 1; i<=n; i++)
    {
        sum = sum + a;
        a = a + d;
    }
    return sum;
}

int main()
{
    float a = 2, d = 2;
    int n = 4;

    cout<<"The value of the AP series is : "<<APSeries(a, d, n)<<endl;

    return 0;
}

//T.C -> O(n) S.C -> O(1)