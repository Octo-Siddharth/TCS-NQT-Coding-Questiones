//Find the sum of all the elements in the array
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum;
    return 0;
}

//T.C -> O(n) S.C -> O(1)