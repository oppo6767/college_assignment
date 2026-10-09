#include <iostream>
using namespace std;

class Point {
    private:
        int x;
        int y;

    public:
        Point(int x=0, int y=0);
        ~Point();

        int getX() {
            return x;
        }

        int getY() {
            return y;
        }
};

Point::Point(int x, int y): x{x}, y{y} {}

Point::~Point() {}


int main() {
    Point p1{100, 200};
    cout << "인자가 있을 경우: " << p1.getX() << ", " << p1.getY() << endl;

    return 0;
}