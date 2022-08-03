//Program to reverse the words present in the string
#include<bits/stdc++.h>

using namespace std;

string reverseWord(string s, int n)
{
    int left = 0;
    int right = n - 1;

    string temp = "";
    string ans = "";

    while (left <= right) {
        char ch= s[left];
        if (ch != ' ') 
        {
            temp += ch;
        } 
        else if (ch == ' ') 
        {
            if (ans!="") 
            {
                ans = temp + " " + ans;
            }
            else 
                ans = temp;
                temp = "";
        }
        left++;
    }
    if(temp != "")
    {
        if(ans != "")
        {
            ans = temp + " " + ans;
        }
        else
        {
            ans = temp;
        }
    }
    return ans;
}

int main()
{
    string s = "I am Siddhartha Rakshit";
    int n = s.length();
    cout<<"The string before reversing the words : "<<endl;
    cout<<s<<endl;
    cout<<"The string after reversing the words : "<<endl;
    cout<<reverseWord(s, n);

    return 0;

}

//T.C -> O(N) S.C -> O(1)