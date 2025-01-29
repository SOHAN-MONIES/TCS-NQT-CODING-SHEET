// https : // takeuforward.org/data-structure/find-all-palindrome-numbers-in-a-given-range/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int originalNumber = n;
    int reversedNumber = 0;
    while (n != 0)
    {
        int last_digit = n % 10;
        reversedNumber = reversedNumber * 10 + last_digit;
        n = n / 10;
    }
    if (originalNumber == reversedNumber)
        return true;
    else
        return false;
}

int main()
{
    int min, max;
    cout << "Enter minimum and maximum number" << endl;
    cin >> min >> max;
    for (int i = min; i <= max; i++)
    {
        if (palindrome(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}