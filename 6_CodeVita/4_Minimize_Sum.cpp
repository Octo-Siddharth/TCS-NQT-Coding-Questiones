/*
Minimize the sum

Given an array of integers, perform atmost K operations so that the sum of elements of final array is minimum. An operation is defined as follows -

Consider any 1 element from the array, arr[i].

Replace arr[i] by floor(arr[i]/2).

Perform next operations on the updated array.

The task is to minimize the sum after utmost K operations.


Constraints

1 <= N, K <= 10^5.


Input

First line contains two integers N and K representing size of array and maximum numbers of operations that can be performed on the array respectively.

Second line contains N space separated integers denoting the elements of the array, arr.


Output

Print a single integer denoting the minimum sum of the final array.



Input

4 3

20 7 5 4



Output

17



Explanation

Operation 1 -> Select 20. Replace it by 10. New array = [10, 7, 5, 4]

Operation 2 -> Select 10. Replace it by 5. New array = [5, 7, 5, 4].

Operation 3 -> Select 7. Replace it by 3. New array = [5,3,5,4].

Sum = 17.



Possible Solution

Input:

4 3

20 7 5 4


*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, temp, sum = 0;
    cin>>n>>k;
    vector<int> v;
    for(int i = 0;i<n; i++)
    {
        cin>>temp;
        sum = sum + temp;
        v.push_back(temp); 
    }
    make_heap(v.begin(), v.end());
    long int maxi = 0, res = 0;
    for(int i = 0; i<k; i++)
    {
        maxi = v.front();
        sum = sum - maxi;
        pop_heap(v.begin(), v.end());
        v.pop_back();
        res = maxi/2;
        sum = sum + res;
        v.push_back(res);
        push_heap(v.begin(), v.end());
    }
    cout<<sum;
}