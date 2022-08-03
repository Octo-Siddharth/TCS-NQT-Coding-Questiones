/*
Problem Statement
Our hoary culture had several great persons since time immemorial and king vikramaditya’s nava ratnas (nine gems) belongs to this ilk.They are named in the following shloka:


Among these, Varahamihira was an astrologer of eminence and his book Brihat Jataak is recokened as the ultimate authority in astrology.

He was once talking with Amarasimha,another gem among the nava ratnas and the author of Sanskrit thesaurus, Amarakosha.

Amarasimha wanted to know the final position of a person, who starts from the origin 0 0 and travels per following scheme.

TCS NQT Coding
Scheme
He first turns and travels 10 units of distance
His second turn is upward for 20 units
Third turn is to the left for 30 units
Fourth turn is the downward for 40 units
Fifth turn is to the right(again) for 50 units
… And thus he travels, every time increasing the travel distance by 10 units.

Test Cases
Case 1
Input : 3
Expected Output :-20 20
Case 2
Input: 4
Expected Output: -20 -20
Case 3
Input : 5
Expected Output : 30 -20
Case 4
Input : 7
Expected Output : 90 -20
Our hoary culture had several great persons since time (1)
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0, y = 0, dist = 10;
    cin >> n;
    char ch = 'R';

    while (n)
    {
        switch (ch)
        {
        case 'R':
            x = x + dist;
            ch = 'U';
            dist = dist + 10;
            break;

        case 'U':
            y = y + dist;
            ch = 'L';
            dist = dist + 10;
            break;

        case 'L':
            x = x - dist;
            ch = 'D';
            dist = dist + 10;
            break;

        case 'D':
            y = y - dist;
            ch = 'A';
            dist = dist + 10;
            break;

        case 'A':
            x = x + dist;
            ch = 'R';
            dist = dist + 10;
            break;
        }
        n--;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}