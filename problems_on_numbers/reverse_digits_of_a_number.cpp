// URL:-https://www.geeksforgeeks.org/write-a-program-to-reverse-digits-of-a-number/?ref=gcse_ind
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int reverseDigits(int n)
{
    int r = 0;
    while (n != 0)
    {
        int m = n % 10;
        r = r * 10 + m;
        n = n / 10;
    }
    return r;
}

int main()
{
    cout << reverseDigits(200);
    return 0;
}