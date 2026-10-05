#include <iostream>
using namespace std;

class Computer {
    private:
        string name;     // 이름
        int ram;         // 메모리 용량
        double cpu_speed; // cpu 속도

    public:
        void setComputer(string n, int r, double c) {
            name = n;
            ram = r;
            cpu_speed = c;
        }

        void print() {
            cout << "이름: " << name << endl;
            cout << "RAM: " << ram << endl;
            cout << "CPU 속도: " << cpu_speed << endl;
        }
};

int main() {
    Computer comp;
    comp.setComputer("오피스컴퓨터", 8, 4.2);
    comp.print();
}