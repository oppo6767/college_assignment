#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
    private:
        string name;
        double marks;

    public:
        Student(string n, double m): name{n}, marks{m} {}

        string getName() {
            return name;
        }

        double getMarks() {
            return marks;
        }
};

bool compare(Student a, Student b) {
    return a.getMarks() > b.getMarks();
}

int main() {
    vector<Student> vec;
    vec.push_back(Student("최자영", 4.3));
    vec.push_back(Student("김철수", 5.0));
    vec.push_back(Student("김영희", 3.8));
    sort(vec.begin(), vec.end(), compare);

    cout << "=====================" << endl;
    for (Student info : vec) {
        cout << "이름 : " << info.getName() << endl;
        cout << "학점 : " << info.getMarks() << endl;
    }
    cout << "=====================" << endl;

    return 0;
}