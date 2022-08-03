/*
The Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or messages is shifted by a number of places down the alphabet.
For example,with a shift of 1, P would be replaced by Q, Q would become R, and so on.
To pass an encrypted message from one person to another, it is first necessary that both parties have the ‘Key’ for the cipher, so that the sender may encrypt and the receiver may decrypt it.
Key is the number of OFFSET to shift the cipher alphabet. Key can have basic shifts from 1 to 25 positions as there are 26 total alphabets.
As we are designing custom Caesar Cipher, in addition to alphabets, we are considering numeric digits from 0 to 9. Digits can also be shifted by key places.
For Example, if a given plain text contains any digit with values 5 and keyy =2, then 5 will be replaced by 7, “-”(minus sign) will remain as it is. Key value less than 0 should result into “INVALID INPUT”

Example 1:
Enter your PlainText: All the best
Enter the Key: 1

The encrypted Text is: Bmm uif Cftu

Write a function CustomCaesarCipher(int key, String message) which will accept plaintext and key as input parameters and returns its cipher text as output.
*/

#include<bits/stdc++.h>

using namespace std;

void solve(string s, int k)
{
    if(k == 0)
    {
        cout<<"Invalid Input";
    }
    else
    {
        for(int i = 0; i<s.length(); i++)
        {
            if(isdigit(s[i]))
            {
                if(s[i] + k <= 57)
                {
                    s[i] = s[i] + k;
                }
                else
                {
                    int left = (s[i] + k) - 57;
                    s[i] = 47 + left;
                }
            }
            else if(s[i] >= 65 && s[i] <= 90)
            {
                if(s[i] + k <= 90)
                {
                    s[i] = s[i] + k;
                }
                else
                {
                    int left = (s[i] + k) - 90;
                    s[i] = 64 + left;
                }
            }
            else if(s[i] >= 97 && s[i] <= 122)
            {
                if(s[i] + k <= 122)
                {
                    s[i] = s[i] + k;
                }
                else
                {
                    int left = (s[i] + k) - 122;
                    s[i] = 96 + left;
                }
            }
        }
    }
    cout<<"The Encrypted Text is : "<<s;
}

int main()
{
    string s;
    int key;
    cout<<"Enter the plain text : ";
    getline(cin, s);
    cout<<"Enter the key : ";
    cin>>key;

    solve(s, key);

    return 0;
}