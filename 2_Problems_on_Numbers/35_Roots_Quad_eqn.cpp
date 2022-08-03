//Program to Find Roots of a quadratic equation
#include<bits/stdc++.h>

using namespace std;

void findroots(int a, int b, int c)
{
    if(a == 0)
    {
        cout<<"Invalid !!";
        return;
    }
    int d = b * b - 4*a*c;
    double sqrt_val = sqrt(abs(d));
    // d > 0
    if(d > 0)
    {
        cout<<"The Root are real and different\n";
        cout<<(-(double)b + (sqrt_val))/(2*a)<<"\n"<<(-(double)b - (sqrt_val))/(2*a)<<endl;
    }
    //d == 0
    else if(d == 0)
    {
        cout<<"The Root are real and equal\n";
        cout<<(-(double)b)/(2*a)<<endl;
    }
    //d < 0
    else
    {
        cout<<"The Root are complex\n";
        cout<<(-(double)b)/(2*a)<<" + i"<<sqrt_val<<"\n"<<(-(double)b)/(2*a)<<" - i"<<sqrt_val<<endl;
    }
}

int main()
{
    int a = 1, b = -3, c = -10;
    findroots(a, b, c);

    return 0;
}

//T.C -> O(n) S.C -> O(1) 