struct ComplexNumber {
    float x;
    float y; // i
};

#ifndef COMPLEXNUMBER_LIB_H
#define COMPLEXNUMBER_LIB_H

#include <iostream>

ComplexNumber operator+(const ComplexNumber &a, const ComplexNumber &b);

ComplexNumber operator-(const ComplexNumber &a, const ComplexNumber &b);

ComplexNumber operator*(const ComplexNumber &a, const ComplexNumber &b);

ComplexNumber operator/(const ComplexNumber &a, const ComplexNumber &b);

bool operator==(const ComplexNumber &a, const ComplexNumber &b);

bool operator!=(const ComplexNumber &a, const ComplexNumber &b);

std::ostream & operator<<(std::ostream &out, const ComplexNumber &a);

#endif //COMPLEXNUMBER_LIB_H
