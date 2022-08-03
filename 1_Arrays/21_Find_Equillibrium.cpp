//Find equillibrium of an array
#include<bits/stdc++.h>

using namespace std;

int findequillibrium(int arr[], int n)
{
    int totalSum = 0;
    for(int i = 0; i<n; i++)
    {
        totalSum = totalSum + arr[i];
    }

    int leftSum = 0, rightsum = totalSum;

    for(int i = 0; i<n; i++)
    {
        rightsum = rightsum - arr[i];
        if(leftSum == rightsum)
        {
            return i;
        }
        leftSum = leftSum + arr[i];
    }
    return - 1;
}

int main()
{
    int arr[] = {2, 3, -1, 8, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findequillibrium(arr, n);
    return 0;
    
}

//T.C -> O(n) S.C -> O(1)