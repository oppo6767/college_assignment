#include <iostream>
using namespace std;

class Airplane {
    private:
        string name;
        int capacity;
        int speed;

    public:
        Airplane() {
            name = "";
            capacity = 0;
            speed = 0;
        }

        Airplane(string n, int cap, int spd) {
            name = n;
            capacity = cap;
            speed = spd;
        }

        void setName(string n)     { name = n; }
        void setCapacity(int cap)  { capacity = cap; }
        void setSpeed(int spd)     { speed = spd; }

        string getName() { return name; }
        int getCapacity() { return capacity; }
        int getSpeed() { return speed; }

        void print() {
            cout << "비행기의 이름: " << name << endl;
            cout << "비행기의 용량: " << capacity << endl;
            cout << "비행기의 속도: " << speed << " Km/h" << endl;
        }
};

int main() {
    Airplane a{"보잉 787", 900, 300};
    cout << "비행기 #1" << endl;
    a.print();
    cout << endl;

    Airplane b;
    b.setName("에어버스 350");
    b.setCapacity(400);
    b.setSpeed(1000);
    cout << "비행기 #2" << endl;
    cout << "비행기의 이름: " << b.getName() << endl;
    cout << "비행기의 용량: " << b.getCapacity() << endl;
    cout << "비행기의 속도: " << b.getSpeed() << " Km/h" << endl;

    return 0;
}