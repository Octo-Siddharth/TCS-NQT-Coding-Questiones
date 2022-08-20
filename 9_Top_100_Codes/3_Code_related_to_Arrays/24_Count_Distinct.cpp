// Program to count the distinct element in an array
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    vector<int> arr(n);
    vector<int> visited(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    visited[j] = 1;
                }
            }
            count++;
        }
    }
    cout << "The distinct elements are : " << count << endl;

    return 0;
}