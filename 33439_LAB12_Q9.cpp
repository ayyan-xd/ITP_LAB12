#include <iostream>
using namespace std;
struct Complex {
    float real, imag;
    };
Complex readComplex() {
    Complex c;
    cout << "Enter real and imaginary parts: ";
    cin >> c.real >> c.imag;
    return c;
}
void writeComplex(Complex c) {
    cout << c.real << (c.imag >= 0 ? "+" : "") << c.imag << "i";
}
Complex addComplex(Complex a, Complex b) {
    Complex res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;
    return res;
}
Complex multiplyComplex(Complex a, Complex b) {
    Complex res;
    res.real = (a.real * b.real) - (a.imag * b.imag);
    res.imag = (a.real * b.imag) + (a.imag * b.real);
    return res;
}
int main() {
    Complex n1 = readComplex();
    Complex n2 = readComplex();
    Complex sum = addComplex(n1, n2);
    Complex prod = multiplyComplex(n1, n2);
    cout << "Sum: "; writeComplex(sum); cout << endl;
    cout << "Product: "; writeComplex(prod); cout << endl;
    return 0;
}
