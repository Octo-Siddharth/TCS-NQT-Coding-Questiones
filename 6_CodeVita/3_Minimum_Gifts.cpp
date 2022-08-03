/*
Minimum Gifts

A Company has decided to give some gifts to all of its employees. For that, the company has given some rank to each employee. Based on that rank, the company has made certain rules to distribute the gifts.

The rules for distributing the gifts are:

Each employee must receive at least one gift.

Employees having higher ranking get a greater number of gifts than their neighbours.

What is the minimum number of gifts required by the company?


Constraints

1 < T < 10

1 < N < 100000

1 < Rank < 10^9



Input

First line contains integer T, denoting the number of test cases.

For each test case:

First line contains integer N, denoting the number of employees.

Second line contains N space separated integers, denoting the rank of each employee.


Output

For each test case print the number of minimum gifts required on a new line.


Example 1

Input

2

5

1 2 1 5 2

2

1 2

Output

7

3


Explanation

For test case 1, adhering to the rules mentioned above,

Employee # 1 whose rank is 1 gets one gift

Employee # 2 whose rank is 2 gets two gifts

Employee # 3 whose rank is 1 gets one gift

Employee # 4 whose rank is 5 gets two gifts

Employee # 5 whose rank is 2 gets one gift

Therefore, total gifts required is 1 + 2 + 1 + 2 + 1 = 7

Similarly, for testcase 2, adhering to rules mentioned above,

Employee # 1 whose rank is 1 gets one gift

Employee # 2 whose rank is 2 gets two gifts

Therefore, total gifts required is 1 + 2 = 3


Possible solution:


Input:

2

5

1 2 1 5 2

2

1 2
*/

#include<bits/stdc++.h>

using namespace std;

long long arr1[100010];
long long arr2[100010];

int main()
{
    int tst_cs;
    cin>>tst_cs;
    for(int i = 1; i <= tst_cs; i++)
    {
        int n;
        long long gift = 0, temp = 0;
        cin>>n;
        for(int i = 0; i<n; i++)
        {
            cin>>arr1[i];
        }
        arr2[0] = 1;
        for(int i = 1; i<n; i++)
        {
            if(arr1[i] > arr1[i - 1])
            {
                arr2[i] = arr2[i - 1] + 1;
            }
            else
            {
                arr2[i] = 1;
            }
        }
        gift = arr2[n - 1];
        for(int i = n - 2; i >= 0; i--)
        {
            if(arr1[i] > arr1[i + 1])
            {
                temp = arr2[i + 1] + 1;
            }
            else
            {
                temp = 1;
            }
            gift = gift + max(temp, arr2[i]);
            arr2[i] = temp;
        }
        cout<<gift<<endl;
    } 
    return 0;
}