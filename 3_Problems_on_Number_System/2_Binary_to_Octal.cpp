//Program to convert Binary to Octal
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "1100110";
    int n = s.length();
    if(n % 3 == 1)
    {
        s = "00" + s;
    }
    else if (n % 3 == 2)
    {
        s = "0" + s;
    }
    string ans = "";
    for(int i = 0; i<n; i = i + 3)
    {
        int temp = (s[i] - '0')*4 + (s[i + 1] - '0')*2 + (s[i + 2] - '0')*1;
        ans += (temp + '0');//Keep in mind
    }
    cout<<"The converted Binary to Octal Number is : "<<ans<<endl;

    return 0;

}

//T.C -> O(N) S.C -> O(1)