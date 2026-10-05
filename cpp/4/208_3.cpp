#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int age;
        int salary;
        int years;

    public:
        Employee(string n, int a, int s, int y) {
            name = n;
            age = a;
            salary = s;
            years = y;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        int getSalary() {
            return salary;
        }

        int getYears() {
            return years;
        }
};

int main() {
    Employee emp("홍길도", 26, 1000000, 1);

    cout << "이름: " << emp.getName() << endl;
    cout << "나이: " << emp.getAge() << endl;
    cout << "연봉: " << emp.getSalary() << endl;
    cout << "근무년수: " << emp.getYears() << endl;
}