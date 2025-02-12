// URL:https://www.geeksforgeeks.org/problems/java-reverse-a-string0416/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string revStr(string s)
{
    int x = 0;
    int y = s.length() - 1;
    while (x < y)
    {
        char temp = s[x];
        s[x] = s[y];
        s[y] = temp;
        x++;
        y--;
    }
    return s;
}

int main()
{

    return 0;
}