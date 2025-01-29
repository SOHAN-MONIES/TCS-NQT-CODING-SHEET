// URL:- https://www.geeksforgeeks.org/problems/factorial5739/0
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    cout << factorial(4);
    return 0;
}