#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int count;
    int num;

    cout << "정수의 개수: ";
    cin >> count;

    vector<int> vex;
    for (int i = 0; i < count; i++) {
        cout << "정수를 입력하시오: ";
        cin >> num;
        vex.push_back(num);   
    }

    int maxValue = vex[0];
    int minValue = vex[0];
    for (int value : vex) {
        maxValue = max(value, maxValue);
        minValue = min(value, minValue);
    }

    cout << "최대값: " << maxValue << endl;
    cout << "최소값: " << minValue << endl;
    return 0;
}