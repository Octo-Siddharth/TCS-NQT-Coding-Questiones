//Remove duplicate from a sorted array
#include<bits/stdc++.h>

using namespace std;

int removeDuplicate(int arr[], int n)
{
    int i = 0;
    for(int j = 1; j < n; j++)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
   
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 3, 3,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicate(arr, n);
    for(int i = 0; i<k; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//T.C -> O(n) S.C -> O(1)