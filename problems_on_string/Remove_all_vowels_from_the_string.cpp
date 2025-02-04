// URL: https://www.geeksforgeeks.org/problems/remove-vowels-from-string1446/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string removeVowels(string &s)
{
    string res = "";
    for (char c : s)
    {
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
        {
            res += c;
        }
    }
    return res;
}

int main()
{
    string s1 = "SOHAN";
    string s2 = removeVowels(s1);
    cout << s2;
    return 0;
}