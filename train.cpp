#include <iostream>
#include "windows.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 5; 
    double p, s;
    p = 4 * a;
    s = a * a;

    cout << "Периметр клумби: " << p << endl;
    cout << "Площа клумби: " << s << endl;

    system("pause");
    return 0;
}
