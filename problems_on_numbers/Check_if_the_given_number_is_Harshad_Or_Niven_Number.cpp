// URL:- Check if the given number is Harshad(Or Niven) Number
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkHarshad(int a)
{
    int original_number = a;
    int sum = 0;
    while (a != 0)
    {
        int last_digit = a % 10;
        sum += last_digit;
        a = a / 10;
    }

    if (original_number % sum == 0)
        return true;
    else
        return false;
}

int main()
{
    cout << checkHarshad(379);
    return 0;
}