// Lab31.cpp
// Скоропад Владислав
// Лабораторна робота № 3.
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    double A, B;

    cout << "x = "; cin >> x;

    A = 2 * fabs(5 - x);

    // розгалуження в скороченій формі:
    if (x <= -1) {
        B = exp(fabs(2 + x));
    }
    if (x < 1 && x > -1) {
        B = pow(sin(1.0 / (fabs(2 + x))), 2);
    }
    if (x >= 1) {
        B = pow(cos(x), 2) / (1.0 + fabs(sin(x)));
    }

    y = A - B;

    cout << "y = " << y << endl;

    // розгалуження в повній формі:
    if (x <= -1) {
        B = exp(fabs(2 + x));
    }
    else if (x < 1 && x > -1) {
        B = pow(sin(1.0 / (fabs(2 + x))), 2);
    }
    else {
        B = pow(cos(x), 2) / (1.0 + fabs(sin(x)));
    }

    y = A - B;

    cout << "y = " << y << endl;

    return 0;
}

