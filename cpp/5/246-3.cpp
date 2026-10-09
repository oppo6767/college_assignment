#include <iostream>
using namespace std;

class Box {
    private:
        int length;
        int width;
        int height;

    public:
        Box(): length{0}, width{0}, height{0} {}
        Box(int l, int w, int h): length{l}, width{w}, height{h} {}

        bool empty() { return length == 0 || width == 0 || height == 0; }

        void setLength(int l) { length = l; }
        void setWidth(int w) { width = w; }
        void setHeight(int h) { height = h; }

        int getLength() { return length; }
        int getWidth() { return width; }
        int getHeight() { return height; }
        int getVolume() { return length * width * height; }

        void print() {
            cout << "상자의 길이: " << length << endl;
            cout << "상자의 너비: " << width << endl;
            cout << "상자의 높이: " << height << endl;
        }
};

int main() {
    Box b1{};
    cout << "상자 #1" << endl;
    b1.print();
    cout << "상자의 부피: " << b1.getVolume() << endl;
    cout << endl;

    Box b2{};
    b2.setLength(3);
    b2.setWidth(2);
    b2.setHeight(4);
    cout << "상자 #2" << endl;
    cout << "상자의 길이: " << b2.getLength() << endl;
    cout << "상자의 너비: " << b2.getWidth() << endl;
    cout << "상자의 높이: " << b2.getHeight() << endl;
    cout << "상자의 부피: " << b2.getVolume() << endl;

    return 0;
}