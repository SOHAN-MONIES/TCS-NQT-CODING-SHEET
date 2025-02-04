// URL:https://www.geeksforgeeks.org/problems/consonants-and-vowels-check/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void checkString(string s)
{
    int v = 0;
    int c = 0;
    int space = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            v++;
        else if (isspace(s[i]))
            space++;
        else
            c++;
    }
    cout << v << " " << c << " " << space;
}

int main()
{
    checkString("a i u e o t m n s w");
    return 0;
}