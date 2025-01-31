// URL:-https://takeuforward.org/data-structure/find-the-largest-element-in-an-array/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sortArr(vector<int> &arr)
{
    int max = INT_MIN;
    for (auto num : arr)
    {
        if (num > max)
        {
            max = num;
        }
    }
    return max;
}

int main()
{
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};
    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
    cout << "The Largest element in the array is: " << sortArr(arr2);
    return 0;
}