//Second smallest and the second largest element in an array
#include<bits/stdc++.h>

using namespace std;

void getMinMax(int arr[], int n)
{
    //Base case
    if(n == 0 || n == 1)
    {
        cout<<-1<<" "<<-1;
    }
    int small = INT_MAX, small2 = INT_MAX;
    int large = INT_MIN, large2 = INT_MIN;
    //geting the fisrt small and large value
    for(int i = 0; i<n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    //Second small and Second large
    for(int i = 0; i<n; i++)
    {
        if(arr[i] < small2 && arr[i] != small)
        {
            small2 = arr[i];
        }
        if(arr[i] > large2 && arr[i] != large)
        {
            large2 = arr[i];
        }
    }
    cout<<"The second smallest : "<<small2;
    cout<<"\nThe second largest  : "<<large2;
}

int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getMinMax(arr, n);

    return 0;
}