#include <iostream>
using namespace std;

void Fibonacci(int first, int second, int count);

int main() {
    int first = 0;
    int second = 1;
    int count = 0;
    cout << "몇 항까지 구할까요: ";
    cin >> count;
    cout << first << ", " << second;
    Fibonacci(first, second, count-2);
    return 0;
}

void Fibonacci(int first, int second, int count) {
    if (count <= 0) {
        return;
    } else {
        cout << ", "; 
    }

    int next = first + second;
    cout << next;
    Fibonacci(second, next, count - 1);
}