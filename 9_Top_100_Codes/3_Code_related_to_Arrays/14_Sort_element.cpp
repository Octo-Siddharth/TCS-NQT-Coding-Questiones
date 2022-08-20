// Program to sortthe elements in an array
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}