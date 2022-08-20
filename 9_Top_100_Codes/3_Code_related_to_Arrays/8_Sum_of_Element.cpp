//Progarm to calculate the sum of element in an array
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100], n, sum = 0;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    cout<<"The sum of the elements in the array is : "<<sum<<endl;

    return 0;
}