//Program to find minimum scalar of two vectors
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr1[] = {1, 2, 6, 3, 7};
    int arr2[] = {10, 7, 45, 3, 7};
    int ans = 0, n;
    n = sizeof(arr1)/sizeof(arr1[0]);

    sort(arr1, arr1 + n);
    //Sorting in descending order
    sort(arr2, arr2 + n, greater<int>());

    for(int i = 0; i<n ;i++)
    {
        ans = ans + arr1[i]*arr2[i];
    }

    cout<<"The minimum Scaler of two vectors are : "<<ans<<endl;

    return 0;
}