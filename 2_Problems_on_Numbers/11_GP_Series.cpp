//Program to find the geometric Progression
#include<bits/stdc++.h>

using namespace std;

float GPSeries(float a, float r, int n)
{
    float sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + a;
        a = a * r;
    }
    return sum;
}

int main()
{
    float a = 1, r = 0.5;
    int n =3;
    cout<<"The value of the GP series is : "<<GPSeries(a, r, 3)<<endl;

    return 0;
}

//T.C -> O(n)  S.C -> O(1)