// URL:- https://www.geeksforgeeks.org/problems/leap-year0943/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkYear(int n)
{
    if ((n % 100 != 0 && n % 4 == 0) || (n % 400 == 0))
        return true;
    else
        return false;
}

int main()
{
    cout << checkYear(2100);
    return 0;
}