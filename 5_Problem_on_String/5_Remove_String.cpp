//Prpgram to remove spaces from string
#include<bits/stdc++.h>

using namespace std;

string modify (string s)
{
    s.erase(remove(s.begin(), s.end(), ' '), s.end()); //GeeksforGeeks logic
    return s;
}

string solve(string s, int n)
{
    remove(s.begin(), s.end(),' ');
    return s;
}

int main()
{
    string s = "India is in my Heart";
    int n = s.length();
    cout<<"The string after removing spaces : "<<solve(s, n)<<endl;

    return 0;
}

//T.C -> O(N) S.C -> O(1)