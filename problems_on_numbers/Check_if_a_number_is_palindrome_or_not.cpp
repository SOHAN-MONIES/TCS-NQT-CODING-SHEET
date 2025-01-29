// https : // www.naukri.com/code360/problems/palindrome-number_624662

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
    cout << palindrome(1415);
    return 0;
}