//Largest number in an array
#include<bits/stdc++.h>

using namespace std;

//technique 1 Sorting technique
int maxVal(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}
//Technique 2 min tecgnique
int largestVal(int arr[], int n)
{
    int max = arr[n - 1];
    for(int i = 0; i<n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    /*
    vector<int> arr = {2, 5, 1, 3, 0};
    sort(arr.begin(), arr.end());
    cout<<"The Largest element in the array is : "<<maxVal(arr);
    */
   int arr[] = {8, 10, 5, 7, 9};
   int n = 5;
   int max = largestVal(arr, n);
   cout<<"The largest element in the array is : "<<max;
}