// URL:- https://www.geeksforgeeks.org/problems/greatest-of-three-numbers2520/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int greatestOfThree(int A, int B, int C)
{
    if (A > B && A > C)
        return A;
    else if (B > C)
        return B;
    else
        return C;
}

int main()
{
    cout << greatestOfThree(20, 50, 6);
    return 0;
}