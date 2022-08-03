//Find the sum od digits in the given range
#include<bits/stdc++.h>

using namespace std;

int SumofDigitRange(int min, int max)
{
    int sum = 0;
    for(int i = min; i<= max; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int min = 2, max = 7;
    cout<<"The sum of Digit in Range is : "<<SumofDigitRange(min, max)<<endl;

    return 0;
}

//T.C -> O(n) S.C -> O(1)