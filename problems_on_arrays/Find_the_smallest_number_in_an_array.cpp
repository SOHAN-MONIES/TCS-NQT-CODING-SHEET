// URL:- https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void getElements(int arr[], int n)
{
    int large = INT_MIN;
    int secondlarge = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        large = max(large, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < large && secondlarge < arr[i])
        {
            secondlarge = arr[i];
        }
    }
    cout << large << "  " << secondlarge;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    getElements(arr, n);
    // 3 7 3 5 6 1
    return 0;
}