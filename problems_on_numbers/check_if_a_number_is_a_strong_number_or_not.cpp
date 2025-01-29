// URL:- https://www.geeksforgeeks.org/problems/strong-numbers4336/1
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

int is_StrongNumber(int n)
{
    int originalNumber = n;
    int sum = 0;
    while (n != 0)
    {
        int last_digit = n % 10;
        sum += factorial(last_digit);
        n = n / 10;
    }
    return sum == originalNumber;
}

int main()
{
    cout << is_StrongNumber(26);
    return 0;
}