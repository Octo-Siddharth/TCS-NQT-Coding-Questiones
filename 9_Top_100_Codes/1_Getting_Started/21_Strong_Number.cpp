//Chcek if the number is a strong number or not

#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int ans = 1;
    for(int i = 1; i<=n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int strongNo(int n)
{
    int sum = 0;
    while(n != 0)
    {
        int rem = n % 10;
        sum = sum + factorial(rem);
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n, ans;
    cin>>n;
    ans = strongNo(n);
    if(ans == n && n != 0)
    {
        cout<<n<<" is a Strong Number"<<endl;
    }
    else
    {
        cout<<n<<" is not a Strong Number"<<endl;
    }

    return 0;
}