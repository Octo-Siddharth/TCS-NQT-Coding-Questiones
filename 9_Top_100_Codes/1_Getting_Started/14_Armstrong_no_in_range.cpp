// Program to find the Armstrong Number in a Range
#include <bits/stdc++.h>

using namespace std;

void isArmstrong(int min, int max)
{
    for (int i = min; i <= max; i++)
    {
        int x = i, temp = i, sum = 0, count = 0;
        while (x != 0)
        {
            count++;
            x = x / 10;
        }
        while (temp != 0)
        {
            int rem = temp % 10;
            sum = sum + pow(rem, count);
            temp = temp / 10;
        }
        if (sum == i)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int min, max;
    cin >> min >> max;
    isArmstrong(min, max);

    return 0;
}
