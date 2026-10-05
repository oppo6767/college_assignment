#include <iostream>
using namespace std;

class Triangle {
    private:
        int base;   // 밑변
        int height; // 높이
        int size;   // 넓이

    public:
        Triangle(int b, int h) {
            base = b;
            height = h;
            size = 0;
        }

        void area() {
            size = (base * height) / 2;
        }

        int getBase() {
            return base;
        }

        int getHeight() {
            return height;
        }

        int getSize() {
            return size;
        }
};

int main() {
    Triangle tri(3, 4);
    tri.area();

    cout << "밑변이 " << tri.getBase() << "이고 높이가 " << tri.getHeight() << "인 삼각형의 면적: " << tri.getSize() << endl;
}