#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int age;
        int salary;

    public:
        Employee(string n, int a, int s) {
            name = n;
            age = a;
            salary = s;
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
};

int main() {
    Employee emp("김철수", 38, 2000000);
    cout << "Employee1:" << endl;
    cout << emp.getName() << endl;
    cout << emp.getAge() << endl;
    cout << emp.getSalary() << endl;
}