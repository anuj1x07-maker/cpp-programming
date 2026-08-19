#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    Complex add(const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3, 2);
    Complex c2(1, 4);
    Complex c3;
    c3 = c1.add(c2);
    cout << "First Number: ";
    c1.display();

    cout << "Second Number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}

