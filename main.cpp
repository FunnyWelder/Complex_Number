#include <iostream>
#include "lib.h"
#include "gtest/gtest.h"
using namespace std;

int main() {
    ComplexNumber a {2,0};
    cout << a << endl;
    ComplexNumber b {3,1};
    cout << b << endl;
    ComplexNumber c {4,-1};
    cout << c << endl;
    ComplexNumber d {5,3};
    cout << d << endl;
    ComplexNumber e {6,-4};
    cout << e << endl;
    a = a + b;
    c = c - d;
    e = e * a;
    c = c / e;
    cout << c << ' ' << e << endl;
    if (c==e)
        cout << "Чудо";
    else if (c!=e) cout << "Ну я так не играю...";
    return 0;
}

