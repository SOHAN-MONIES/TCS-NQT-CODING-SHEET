// URL:- https://takeuforward.org/arrays/calculate-sum-of-the-elements-of-the-array/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void calculateSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}

int main()
{
    int arr[] = {1, 2, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    calculateSum(arr, n);
}