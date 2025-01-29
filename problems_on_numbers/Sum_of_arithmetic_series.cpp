// https : // www.geeksforgeeks.org/problems/sum-of-ap-series4512/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long sum_of_gp(long n, long a, long d)
{
    long sum = 0;
    if (n == 0)
        return 0;
    if (n == 1)
        return a;
    else
    {
        sum = a;
        for (int i = 2; i <= n; i++)
        {
            sum = sum + a + (i - 1) * d;
        }

        return sum;
    }
}

int main()
{
    cout << sum_of_gp(5, 1, 3);
    return 0;
}