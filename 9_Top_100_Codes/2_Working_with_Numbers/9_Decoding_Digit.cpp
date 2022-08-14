// Count possible decoding of a given digit sequence
#include <bits/stdtr1c++.h>

using namespace std;

int CountDecoding(char *d, int n)
{
    int count[n + 1];
    count[0] = 1;
    count[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        count[i] = 0;
        if (d[i - 1] > '0')
        {
            count[i] = count[i - 1];
        }

        if (d[i - 2] == '1' || (d[i - 2] == '2' && d[i - 1] < '7'))
        {
            count[i] = count[i] + count[i - 2];
        }
    }
    return count[n];
}

int main()
{
    char d[100];
    int n = strlen(d);
    cin >> d;
    cout << "The count is : " << CountDecoding(d, n);

    return 0;
}