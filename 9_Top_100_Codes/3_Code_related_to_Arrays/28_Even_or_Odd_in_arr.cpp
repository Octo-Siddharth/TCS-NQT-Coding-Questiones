// Program to count the number of even or odd in array
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count_Even = 0, count_Odd = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_Even++;
        }
        else
        {
            count_Odd++;
        }
    }
    cout << "Even : " << count_Even << "\nOdd : " << count_Odd << endl;
    return 0;
}