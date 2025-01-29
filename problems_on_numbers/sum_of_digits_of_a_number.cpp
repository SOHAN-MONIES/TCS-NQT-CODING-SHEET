// URL:- https://www.geeksforgeeks.org/problems/sum-of-digits1742/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit;
        n = n / 10;
    }
    return sum;
}

int main()
{
    cout << sumOfDigits(123);
    return 0;
}