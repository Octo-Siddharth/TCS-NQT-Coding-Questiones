/*
Prime Numbers with a Twist
Ques. Write a code to check whether no is prime or not. Condition use function check() to find whether entered no is positive or negative ,if negative then enter the no, And if yes pas no as a parameter to prime() and check whether no is prime or not?

Whether the number is positive or not, if it is negative then print the message “please enter the positive number”
It is positive then call the function prime and check whether the take positive number is prime or not.

*/

#include <bits/stdc++.h>

using namespace std;

int isPrime(int n)
{
    int c = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c = c + 1;
        }
    }
    if (c >= 1)
    {
        cout << n << " is not a Prime Number" << endl;
    }
    else
    {
        cout << n << " is a Prime Number" << endl;
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Enter a positive number";
    }
    else
    {
        isPrime(n);
    }
}