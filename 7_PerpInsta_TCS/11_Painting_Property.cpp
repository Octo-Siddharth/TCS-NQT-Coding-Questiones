/*
We want to estimate the cost of painting a property. Interior wall painting cost is Rs.18 per sq.ft. and exterior wall painting cost is Rs.12 per sq.ft.

Take input as
1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each Interior 4. Wall in units of square feet
Surface Area of each Exterior Wall in units of square feet

If a user enters zero  as the number of walls then skip Surface area values as User may don’t  want to paint that wall.

Calculate and display the total cost of painting the property
Example 1:
6
3
12.3
15.2
12.3
15.2
12.3
15.2
10.10
10.10
10.00
Total estimated Cost : 1847.4 INR
Note: Follow in input and output format as given in above example
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int interior, exterior;
    float int_paint = 18, ext_paint = 12, temp, cost = 0;
    cin>>interior>>exterior;
    if(interior < 0 || exterior < 0)
    {
        cout<<"Invalid Input"<<endl;
    }
    if(interior == 0 || exterior == 0)
    {
        cout<<"Total Estimated cost : 0.00"<<endl;
    } 
    else
    {
        for(int i = 0; i<interior; i++)
        {
            cin>>temp;
            cost = cost + int_paint*temp;
        }
        for(int i = 0; i<exterior; i++)
        {
            cin>>temp;
            cost = cost + ext_paint*temp;
        }
        cout<<"Total estimated cost is : "<<cost<<endl;
    }
    return 0;
}