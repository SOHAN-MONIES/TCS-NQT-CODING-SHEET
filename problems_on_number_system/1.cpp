#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int rem = 0, ans = 0, pow = 1;
    while (n != 0)
    {
        rem = n % 2;
        ans = (rem * pow) + ans;
        n = n / 2;
        pow = pow * 10;
    }
    cout << ans;
}