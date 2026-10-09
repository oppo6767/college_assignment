#include <iostream>
using namespace std;

class Complex {
    private:
        double r;     // 실수
        double i;     // 허수

    public:
        Complex(double _r=0, double _i=0): r{_r}, i{_i} {}

        void setR(double new_r) { r = new_r; }
        void setI(double new_i) { i = new_i; }

        double getR() { return r; }
        double getI() { return i; }

        void print() {
            if (i >= 0)
                cout << "(" << r << " + " << i << "i" << ")";
            else
                cout << "(" << r << " - " << -i << "i" << ")";
        }
};

Complex add(Complex a, Complex b) {
    Complex result;
    result.setR(a.getR() + b.getR());
    result.setI(a.getI() + b.getI());
    return result;
}

int main() {
    Complex a{5, 3};
    a.print();
    cout << "+";

    Complex b{3, -4};
    b.print();
    cout << "=";

    Complex c = add(a, b);
    c.print();
    cout << endl;

    return 0;
}