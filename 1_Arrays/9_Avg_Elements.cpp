//Find the average of all elments in the array
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int avg = 0;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
        avg = sum/n;
    }
    cout<<avg;
    return 0;
}

//T.C -> O(n) S.C -> O(1)