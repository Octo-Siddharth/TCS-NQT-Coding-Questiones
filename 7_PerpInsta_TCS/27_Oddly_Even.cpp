/*
Given a maximum of 100 digit numbers as input, find the difference between the sum of odd and even position digits

Test Cases
Case 1
Input: 4567
Expected Output: 2
Explanation : Odd positions are 4 and 6 as they are pos: 1 and pos: 3, both have sum 10. Similarly, 5 and 7 are at even positions pos: 2 and pos: 4 with sum 12. Thus, difference is 12 – 10 = 2

Case 2
Input: 5476
Expected Output: 2
Case 3
Input: 9834698765123
Expected Output: 1
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int even = 0, odd = 0, i = 0;
    long long num;
    cin>>num;
    while(num != 0)
    {
        if(i % 2 == 0)
        {
            even = even + num % 10;
            num = num / 10;
            i++;
        }
        else
        {
            odd = odd + num % 10;
            num = num / 10;
            i++;
        }
    }
    cout<<abs(odd - even);

    return 0;
}