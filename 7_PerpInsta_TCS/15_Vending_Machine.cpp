/*
FULLY AUTOMATIC VENDING MACHINE – dispenses your cuppa on just press of button. A vending machine can serve range of products as follows:

Coffee

Espresso Coffee
Cappuccino Coffee
Latte Coffee
Tea

Plain Tea
Assam Tea
Ginger Tea
Cardamom Tea
Masala Tea
Lemon Tea
Green Tea
Organic Darjeeling Tea
Soups 

Hot and Sour Soup
Veg Corn Soup
Tomato Soup
Spicy Tomato Soup
Beverages

Hot Chocolate Drink
Badam Drink
Badam-Pista Drink
Write a program to take input for main menu & sub menu and display the name of sub menu selected in the following format (enter the first letter to select main menu):

Welcome to CCD 

Enjoy your

Example 1:

Input:
c
1
Output
Welcome to CCD!
Enjoy your Espresso Coffee!
Example 2:

Input
t
9
Output
INVALID OUTPUT!
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string c[3] = {"Espresso Coffee", "Cappuccino Coffee", "Latte Coffee"};
    string t[8] = {"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon Tea", "Green Tea", "Organic Darjeeling Tea"};
    string s[4] = {"Hot and Sour Soup", "Veg Corn Soup", "Tomato Soup", "Spicy Tomato Soup"};
    string b[3] = {"Hot Chocolate Drink", "Badam Drink", "Badam-Pista Drink"};
    char ch;
    int n;
    string result = "";
    cin>>ch>>n;
    if(ch == 'c' && n<= 3)
    {
        result = c[n - 1];
    }
    else if(ch == 't' && n <= 8)
    {
        result = t[n - 1];
    }
    else if(ch == 's' && n <= 4)
    {
        result = s[n - 1];
    }
    else if(ch == 'b' && n <= 3)
    {
        result = b[n - 1];
    }
    else
    {
        result = "INVALID INPUT";
    }

    if(result != "INVALID INPUT")
    {
        cout<<"Welcome to CCD! \nEnjoy your : "<<result;
    }
    else
    {
        cout<<result;
    }
    return 0;
}