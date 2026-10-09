#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int snumber;
        int age;

    public:
        Person();
        Person(string name, int snum, int age);

        ~Person() {}

        string getName() {
            return name;
        }

        int getSnumber() {
            return snumber;
        }

        int getAge() {
            return age;
        }
};

Person::Person(): name{""}, snumber{0}, age{0} {}

Person::Person(string name, int snum, int age)
    : name{name}, snumber{snum}, age{age} {}

int main() {
    Person p{};
    cout << p.getName() << " " << p.getSnumber() << " " << p.getAge() << endl;

    return 0;
}