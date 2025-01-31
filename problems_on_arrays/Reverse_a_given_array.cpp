// URL:- https://www.geeksforgeeks.org/problems/reverse-an-array/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int m = n / 2;
    int x = 0;
    int y = n - 1;
    while (m--)
    {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        x++;
        y--;
    }
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    return 0;
}