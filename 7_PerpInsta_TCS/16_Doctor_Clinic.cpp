/*
A doctor has a clinic where he serves his patients. The doctor’s consultation fees are different for different groups of patients depending on their age. If the patient’s age is below 17, fees is 200 INR. If the patient’s age is between 17 and 40, fees is 400 INR. If patient’s age is above 40, fees is 300 INR. Write a code to calculate earnings in a day for which one array/List of values representing age of patients visited on that day is passed as input.

Note:

Age should not be zero or less than zero or above 120
Doctor consults a maximum of 20 patients a day
Enter age value (press Enter without a value to stop):
Example 1:

Input
20
30
40
50
2
3
14
Output
Total Income 2000 INR
Note: Input and Output Format should be same as given in the above example.
For any wrong input display INVALID INPUT

Output Format

Total Income 2100 INR
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Patient, count = 0, flag = 0, fee_sum = 0;
    while(cin>>Patient)
    {
        if(Patient <= 0 && Patient > 120)
        {
            flag = 1;
            break;
        }
        count++;

        if(Patient < 17)
        {
            fee_sum = fee_sum + 200;
        }
        else if(Patient >= 17 && Patient <= 40)
        {
            fee_sum = fee_sum + 400;
        }
        else
        {
            fee_sum = fee_sum + 300;
        }
    } 
    if(count > 20 && flag != 1)
    {
        cout<<"INVALID INPUT";
    }
    else 
    {
        cout<<"Total Income is : "<<fee_sum<<" INR";
    }
    return 0;
}