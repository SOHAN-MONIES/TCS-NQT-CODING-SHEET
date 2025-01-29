#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool armstrongNumber(int n)
{
    int original_number = n;
    int m = n;
    int sum = 0;
    int cnt = 0;
    while (n != 0)
    {
        cnt++;
        n = n / 10;
    }
    while (m != 0)
    {
        int last_digit = m % 10;
        sum += pow(last_digit, cnt);
        m = m / 10;
    }
    if (original_number == sum)
        return true;
    else
        return false;
}

int main()
{
    cout << armstrongNumber(153);
    return 0;
}