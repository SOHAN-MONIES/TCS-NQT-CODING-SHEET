// https://www.geeksforgeeks.org/problems/prime-number2314/0
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
{  
                return false;
            }
        }
        return true;
    }
}

int main()
{
    
    cout << isPrime(2);
}
