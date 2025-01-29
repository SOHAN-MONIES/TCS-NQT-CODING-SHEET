// URL:- https://www.geeksforgeeks.org/problems/area-of-rectange-right-angled-triangle-and-circle2600/1
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> getAreas(int L, int W, int B, int H, int R)
{
    vector<int> v1;
    int rectangle = L * W;
    int triangle = B * H / 2;
    int circle = 3.14 * R * R;
    v1.push_back(rectangle);
    v1.push_back(triangle);
    v1.push_back(circle);
    return v1;
}

int main()
{
    vector<int> v2 = getAreas(32, 32, 54, 12, 52);
    for (auto num : v2)
    {
        cout << num << " ";
    }
    return 0;
}