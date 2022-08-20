//Program to find all symmetric elements in an array
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][2];
    arr[0][0] = 11;
    arr[0][1] = 20;
    arr[1][0] = 30;
    arr[1][1] = 40;
    arr[2][0] = 5;
    arr[2][1] = 10;
    arr[3][0] = 40;
    arr[3][1] = 30;
    arr[4][0] = 10;
    arr[4][1] = 5;

    for(int i = 0; i<5; i++)
    {
        for(int j = i + 1; j<5; j++)
        {
            if(arr[i][0] ==arr[j][1] && arr[i][1] == arr[j][0])
            {
                cout<<"("<<arr[i][0]<<" "<<arr[i][1]<<")"<<endl;
            }
        }
    }
    return 0;

}