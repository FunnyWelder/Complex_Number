struct ComplexNumber {
    float x;
    float y; // i
};

ComplexNumber operator+(const ComplexNumber a, const ComplexNumber b);

ComplexNumber operator-(const ComplexNumber a, const ComplexNumber b);

ComplexNumber operator*(const ComplexNumber a, const ComplexNumber b);

ComplexNumber operator/(const ComplexNumber a, const ComplexNumber b);

bool operator==(const ComplexNumber a, const ComplexNumber b);

#ifndef COMPLEXNUMBER_LIB_H
#define COMPLEXNUMBER_LIB_H

#endif //COMPLEXNUMBER_LIB_H
