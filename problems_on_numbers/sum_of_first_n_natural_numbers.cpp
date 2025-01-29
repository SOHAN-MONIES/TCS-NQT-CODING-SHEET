#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int seriesSum(int n)
{
    // code here
    if (n == 0)
        return 0;
    else
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        return sum;
    }
}

int main()
{
    cout << seriesSum(5);
    return 0;
}