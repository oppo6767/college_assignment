#include <iostream>
using namespace std;

int main() {
    int f = 0;
    for (int i = 0; i < 11; i++) {
        cout << f << "\t" << (f - 32.0) * 5.0 / 9.0 << endl;
        f += 10;
    }
    return 0;
}