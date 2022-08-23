//Replace each element by its rank given in array using C++
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {100, 2, 70, 12 , 90};
    int n = arr.size();
    vector<int> temp(n);
    for(int i = 0; i<n; i++)
    {
        temp[i] = arr[i];
    }
    sort(temp.begin(), temp.end());

    for(int i = 0 ;i <n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(temp[j] == arr[i])
            {
                arr[i] = j+1;
                break;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}