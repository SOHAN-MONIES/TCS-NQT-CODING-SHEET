#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPerfectNumber(int n)
{
    if (n == 1)
        return 0;
    else
    {
        int sum = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i * i != n)
                    sum = sum + i + n / i;
                else
                    sum = sum + i;
            }
        }
        return sum == n;
    }
}

int main()
{
    cout << isPerfectNumber(6);
    return 0;
}