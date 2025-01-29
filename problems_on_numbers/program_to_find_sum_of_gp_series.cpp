// URL:- https://takeuforward.org/data-structure/program-to-find-sum-of-gp-series/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long sum_of_gp(long n, long a, long r)
{
    if (n == 1)
        return a;
    else
    {
        int sum = a;
        for (int i = 2; i <= n; i++)
        {
            sum += a * (pow(r, i - 1));
        }
        return sum;
    }
}

int main()
{
    cout << sum_of_gp(4, 2, 2);
    return 0;
}