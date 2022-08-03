//Find the Fibonacci numbers till n terms
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5, a = 0, b = 1;
    cout<<"The Fibonacci series till "<<n<<" is : ";
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i<=n; i++)
    {
        int next_no; 
        next_no = a + b;
        cout<<next_no<<" ";
        a = b;
        b = next_no;
    }
}

//T.C -> O(n) S.C -> O(1)