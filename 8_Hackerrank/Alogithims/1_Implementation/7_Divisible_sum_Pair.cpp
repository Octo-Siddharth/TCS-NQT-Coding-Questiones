/*
Given an array of integers and a positive integer , determine the number of  pairs where  and  +  is divisible by .

Example



Three pairs meet the criteria:  and .

Function Description

Complete the divisibleSumPairs function in the editor below.

divisibleSumPairs has the following parameter(s):

int n: the length of array 
int ar[n]: an array of integers
int k: the integer divisor
Returns
- int: the number of pairs

Input Format

The first line contains  space-separated integers,  and .
The second line contains  space-separated integers, each a value of .

Constraints

Sample Input

STDIN           Function
-----           --------
6 3             n = 6, k = 3
1 3 2 6 1 2     ar = [1, 3, 2, 6, 1, 2]
Sample Output

 5
Explanation

Here are the  valid pairs when :


*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, count = 0;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i< n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if((arr[i] + arr[j]) % k == 0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
    
}