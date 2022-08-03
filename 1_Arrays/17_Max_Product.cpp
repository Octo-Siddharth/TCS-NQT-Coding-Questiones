//Find the maximum product in the subarray
#include<bits/stdc++.h>

using namespace std;

int maxProdSubarray(vector<int> &arr)
{
   int prod1 = arr[0], prod2 = arr[0], result = arr[0];
   for(int i = 1; i<arr.size(); i++)
   {
        int temp = max({arr[i], prod1*arr[i], prod2*arr[i]});
        prod2 = min({arr[i], prod1*arr[i], prod2*arr[i]});
        prod1 = temp;

        result = max(result, prod1);
   }
   return result;
}

int main()
{
    vector<int> arr = {1,2,-3,0,-4,-5};

    cout<<maxProdSubarray(arr);

    return 0;
}

//Using kadane's algorothim T.C -> O(n) S.C -> O(1)