// URL:  https://www.geeksforgeeks.org/problems/decimal-to-binary-1587115620/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string decToBinary(int n)
{
    string s;
    while(n!=0){
        int r = n % 2;
        s.append(to_string(r));
        n = n / 2;
    }
    int x = 0;
    int y = s.size() - 1;
    while(x<y){
        swap(s[x], s[y]);
        x++;
        y--;
    }
    return s;
}

int main()
{
    cout<<decToBinary(36);
    return 0;
}