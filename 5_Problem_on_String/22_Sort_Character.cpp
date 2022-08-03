//Program to sort the characters in a string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "hosico cat";
    sort(s.begin(), s.end());
    cout<<"The sorted string is : "<<s<<endl;

    return 0;
}

//T.C -> O(nLogn) S.C -> O(1)