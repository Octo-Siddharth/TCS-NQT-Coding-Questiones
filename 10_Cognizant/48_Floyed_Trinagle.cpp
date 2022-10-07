// Program to print the Floyed's Triangle
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, num = 1;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << num << " ";
            ++num;
        }
        cout << endl;
    }
}