//Check if a number is Positive or Negetive
#include<bits/stdc++.h>

using namespace std;

void checkNo(int n)
{
    if(n > 0)
    {
        cout<<n<<" is Positive number\n";
    }
    else
    {
        cout<<n<<" is Negetive number";
    }
}

int main()
{
    int n1 = 3;
    checkNo(n1);
    int n2 = -3;
    checkNo(n2);
}