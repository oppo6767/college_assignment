#include <iostream>
using namespace std;

class Complex {
    private:
        double r_num;     // 실수
        double i_num;     // 허수

    public:
        void complex(double r = 5, double i = 3) {
            r_num = r;
            i_num = i;
        }

        void print() {
            if (r_num != 0) { 
                cout << r_num;
                if (i_num > 0) {
                    cout << " + " << i_num << "i" << endl;
                } else if (i_num < 0) {
                    cout << " - " << -i_num << "i" << endl;
                } else {
                    cout << endl; // 허수부가 0인 경우
                }
            } else {
                if (i_num != 0) {
                    cout << i_num << "i" << endl;
                } else {
                    cout << "0" << endl; // 실수부와 허수부가 모두 0인 경우
                }
            }
        }
};

int main() {
    Complex c1;
    c1.complex();
    c1.print();

    Complex c2;
    c2.complex(3.0, -4.0);
    c2.print();

    return 0;
}