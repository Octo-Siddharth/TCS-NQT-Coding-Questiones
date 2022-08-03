//Find the median of the array
#include<bits/stdc++.h>

using namespace std;

void getMedian(int arr[], int n)
{
    sort(arr, arr+n);
    if(n % 2 == 0)
    {
        int index1 = (n/2)-1;
        int index2 = (n/2);
        //float ans = (arr[index1] + arr[index2])/2;
        cout<<(float)(arr[index1] + arr[index2])/2;
    }
    else
    {
        cout<<arr[(n/2)];
    }
}

int main()
{
    int arr[] = {4,7,1,2,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    getMedian(arr, n);
    return 0;
}

//T.C -> O(nlogn) S.C -> O(1)