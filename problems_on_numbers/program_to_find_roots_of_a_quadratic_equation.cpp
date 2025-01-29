// URL:- https://takeuforward.org/data-structure/program-to-find-roots-of-a-quadratic-equation/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void quadraticSolution(double a, double b, double c)
{
    double D = b * b - 4 * a * c;
    if (D == 0)
    {
        cout << "The roots are real and equal\n";
        double x = -b / (2 * a);
        cout << " x1 =" << x << " x2 =" << x;
    }
    else if (D > 0)
    {
        cout << "The roots are real and distinct \n";
        double x, y;
        x = (-b + sqrt(D)) / (2 * a);
        y = (-b - sqrt(D)) / (2 * a);
        cout << "x1=" << x << ",x2 =" << y;
    }
    else
    {
        cout << "The roots are imaginary\n";
    }
}

int main()
{
    quadraticSolution(1, -3, -10);
    return 0;
}