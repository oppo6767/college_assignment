#include <iostream>
using namespace std;

int main() {
    for (int count = 1; count < 8; count++) {
        for (int i = 0; i < count; i++) {
            cout << i + 1;
        }

        for (int j = 0; j < 7 - count; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*int main() {
    int count = 7;
    for (int i = 0; ; i++) {
        cout << i + 1;
        if (i != 7 - count) continue;

        for (int j = 7 - count; j < 7; j++) {
            cout << "*";
        }
        cout << endl;
        count--;
        if (count <= 0) break;

        i = -1;
    }
}*/
