#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        void setPerson(string n, int a) {
            name = n;
            age = a;
        }

        void print() {
            cout << "이름 : " << name << endl;
            cout << "나이 : " << age << endl;
        }
};

int main() {
    Person obj;
    obj.setPerson("김철수", 21);
    obj.print();
    
    return 0;
}