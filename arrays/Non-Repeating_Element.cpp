// URL: https://www.geeksforgeeks.org/problems/non-repeating-element3958/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int firstNonRepeating(vector<int> &arr)
{
    vector<int> v1;
    unordered_map<int, int> hash;
    for (auto num : arr)
        hash[num]++;
    for (auto num : arr)
    {
        if (hash[num] == 1)
            return num;
    }
    return 0;
}

int main() {
    
    return 0;
}