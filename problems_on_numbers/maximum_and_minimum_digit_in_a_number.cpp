// URL:- https://takeuforward.org/data-structure/maximum-and-minimum-digit-in-a-number/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> maximumAndMinimum(int n)
{
    vector<int> v1;
    while (n != 0)
    {
        int lastDigit = n % 10;
        v1.push_back(lastDigit);
        n = n / 10;
    }
    sort(v1.begin(), v1.end());
    vector<int> v2;
    v2.push_back(v1.front());
    v2.push_back(v1.back());
    return v2;
}

int main()
{
    int n = 1234;
    vector<int> result = maximumAndMinimum(n);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}