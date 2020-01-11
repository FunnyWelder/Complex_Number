#include "lib.h"

ComplexNumber operator+(const ComplexNumber &a, const ComplexNumber &b) {
    ComplexNumber r = a;
    r.x += b.x;
    r.y += b.y;
    return r;
}

ComplexNumber operator-(const ComplexNumber &a, const ComplexNumber &b) {
    ComplexNumber r = a;
    r.x -= b.x;
    r.y -= b.y;
    return r;
}

ComplexNumber operator*(const ComplexNumber &a, const ComplexNumber &b) {
    ComplexNumber r = a;
    r.x = a.x*b.x - a.y*b.y;
    r.y = a.x*b.y + a.y*b.x;
    return r;
}

ComplexNumber operator/(const ComplexNumber &a, const ComplexNumber &b) {
    ComplexNumber r = a;
    r.x = (a.x*b.x + a.y*b.y)/(b.x*b.x + b.y*b.y);
    r.y = (a.y*b.x - a.x*b.y)/(b.x*b.x + b.y*b.y);
    return r;
}

bool operator==(const ComplexNumber &a, const ComplexNumber &b) {
    return  (a.x == b.x) && (a.y == b.y);
}

bool operator!=(const ComplexNumber &a, const ComplexNumber &b) {
    return  !((a.x == b.x) && (a.y == b.y));
}

std::ostream & operator<<(std::ostream &out, const ComplexNumber &a) {
    out << a.x;
    if (a.y != 0) {
        if (a.y > 0)
            out << "+";
        if ((a.y != 1) && (a.y != -1)) {
            out << a.y;
        }
        if (a.y != -1) {
            out << "i";
        } else {
            out << "-i";
        }
    }
    return out;
}