
// URL:- https://www.geeksforgeeks.org/problems/sum-of-ap-series4512/0
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long sum_of_gp(long n, long a, long d)
{
    long sum = a;
    if (n == 1)
        return a;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            sum += a + (i - 1) * d;
        }
        return sum;
        
        
    }
}

int main()
{

    return 0;
}
