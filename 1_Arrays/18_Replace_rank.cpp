//Replace elements by its rank in the array
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {20, 15, 26, 2, 98, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++)
    {
        set<int> s;
        for(int j = 0; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                s.insert(arr[j]);
            }
        }
        cout<<s.size() + 1<<" ";
    }
    return 0;
}

//T.C -> O(n*n) S.C -> O(n)