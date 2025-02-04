// URL:https://www.geeksforgeeks.org/problems/palindrome-string0817/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPalindrome(string s)
{

    int x = 0;
    int y = s.length() - 1;
    while (x < y)
    {
        if (s[x] != s[y])
            return false;
        x++;
        y--;
    }
    return true;
}

int main()
{
    cout << isPalindrome("wbklpwm");
    return 0;
}