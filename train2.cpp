#include <iostream>
#include "math.h"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y, Y, Z;
    double sum = 0;
    double mult = 1;

    cout << "Введіть x (x > 0): ";
    cin >> x;
    cout << "Введіть y (y > 0): ";
    cin >> y;

    for (int k = 1; k < 6; ++k) {
        sum += log(k * x);
    }

    Y = (cos(x) + sum) / (0.5 + pow(x, 5));
    for (int k = 1; k < 6; ++k) {
        mult *= log(k * y);
    }

    Z = pow(y, 5) + mult;
    
    cout << "Y = " << Y << endl;
    cout << "Z = " << Z << endl;
    return 0;
}