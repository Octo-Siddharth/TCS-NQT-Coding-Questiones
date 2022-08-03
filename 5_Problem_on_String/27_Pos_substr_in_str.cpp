//Program to find the position of substring in a string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "Tata Consultancy Service";
    string s2 = "Consultancy";
    auto findIndex = s1.find(s2);//Using built in function

    cout<<"The position of substring in the string is : "<<findIndex<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(1)