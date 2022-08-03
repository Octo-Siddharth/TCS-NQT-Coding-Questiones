//Program to find the word with highest number of repeated letters in string
#include<bits/stdc++.h>

using namespace std;

void solve(string s, int n)
{
    int maxi_num_word = 0;
    int curr_maxi_num_word = 0;
    int freq[26] = {0}; 

    string ans = "";

    for(int left = 0; left < n;)
    {
        int right = left + 1;
        while(s[right] != ' ' && right < n)
        {
            right++;
        }

        for(int index = left; index < right; index++)
        {
            freq[s[index] - 'a']++;
        }
        for(int i = left; i<26; i++)
        {
            if(freq[i]>1)
            {
                curr_maxi_num_word++;
            }
        }

        if(curr_maxi_num_word > maxi_num_word)
        {
            maxi_num_word = curr_maxi_num_word;
            ans = "";
            for(int j = left; j<right; j++)
            {
                ans = ans + s[j];
            }
        }
        left = right + 1;
    }
    if(ans.empty())
    {
        cout<<"-1";
    }
    else
    {
        cout<<"Words with highest numbers of repeated letters are : ";
        cout<<ans;
    }
}


int main()
{
    string s = "abcdefghij google microsoft";
    int n = s.length();

    solve(s, n);
    return 0;

}
//T.C -> O(N^2) S.C -> O(1)