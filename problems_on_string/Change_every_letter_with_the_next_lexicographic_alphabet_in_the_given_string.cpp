// URL: https://www.geeksforgeeks.org/problems/remove-all-characters-other-than-alphabets4923/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string removeSpecialCharacter(string s)
{
    string res = "";

    for (char c : s)
    {
        int ascii = (int)c;
        if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
            res += c;
    }
    if (res.size() == 0)
    {
        res = "-1";
        return res;
    }
    return res;
}

int main()
{
    string s = "{}";
    removeSpecialCharacter(s);
    return 0;
}