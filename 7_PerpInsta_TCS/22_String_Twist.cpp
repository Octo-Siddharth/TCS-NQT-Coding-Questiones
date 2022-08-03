/*
The program will recieve 3 English words inputs from STDIN

These three words will be read one at a time, in three separate line
The first word should be changed like all vowels should be replaced by %
The second word should be changed like all consonants should be replaced by #
The third word should be changed like all char should be converted to upper case
Then concatenate the three words and print them
Other than these concatenated word, no other characters/string should or message should be written to STDOUT

For example if you print how are you then output should be h%wa#eYOU.

You can assume that input of each word will not exceed more than 5 chars
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[10], b[10], c[10];
    int x, y, z;
    cin >> a;
    cin >> b;
    cin >> c;

    x = strlen(a);
    y = strlen(b);
    z = strlen(c);

    for (int i = 0; i < x; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            a[i] = '%';
        }
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            a[i] = '%';
        }
    }

    for (int j = 0; j < y; j++)
    {
        if (b[j] == 'b' || b[j] == 'c' || b[j] == 'd' || b[j] == 'f' || b[j] == 'g' || b[j] == 'h' || b[j] == 'j' || b[j] == 'k' || b[j] == 'l' || b[j] == 'm' || b[j] == 'n' || b[j] == 'p' || b[j] == 'q' || b[j] == 'r' || b[j] == 's' || b[j] == 't' || b[j] == 'v' || b[j] == 'w' || b[j] == 'x' || b[j] == 'y' || b[j] == 'z')
        {
            b[j] = '#';
        }
        if (b[j] == 'B' || b[j] == 'C' || b[j] == 'D' || b[j] == 'F' || b[j] == 'G' || b[j] == 'H' || b[j] == 'J' || b[j] == 'K' || b[j] == 'L' || b[j] == 'M' || b[j] == 'N' || b[j] == 'P' || b[j] == 'Q' || b[j] == 'R' || b[j] == 'S' || b[j] == 'T' || b[j] == 'V' || b[j] == 'W' || b[j] == 'X' || b[j] == 'Y' || b[j] == 'Z')
        {

            b[j] = '#';
        }
    }

    for(int i = 0; i<z; i++)
    {
        c[i] = toupper(c[i]);
    }

    cout<<a <<b <<c;
    return 0;

}    