// URL:- https://takeuforward.org/maths/greatest-of-two-numbers/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int greatest(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int greatestUsingMax(int a, int b)
{
    return max(a, b);
}
int main()
{
    cout << greatestUsingMax(5, 8);
    return 0;
}