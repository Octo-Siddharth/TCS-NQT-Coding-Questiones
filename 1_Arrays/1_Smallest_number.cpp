//Smallest number in an array
#include<bits/stdc++.h>

using namespace std;

//technique 1 Sorting technique
int sortArr(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    return arr[0];
}
//Technique 2 min tecgnique

int minVal(int arr[], int n)
{
    int min = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    /*vector<int> arr = {2, 5, 1, 3, 0};

    cout<<"The smallest value of the array is : "<<sortArr(arr);
    return 0;
    */

   int arr[] = {2, 5, 1, 3, 0};
   int n = 5;
   int min = minVal(arr, n);
   cout<<"The smallest element in the array is : "<<min;
   return 0;
}