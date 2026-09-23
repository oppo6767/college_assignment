#include <iostream>
using namespace std;

bool safety(const string& password);

int main() {
    string password;
    cout << "암호를 입력하세요: ";
    getline(cin, password);

    if (safety(password)) {
        cout << "안전합니다" << endl;
    } else {
        cout << "안전하지 않습니다" << endl;
    }
}

bool safety(const string& password) {
    bool hasUpper = false;
    bool hasLower = false;
    bool hasnumber = false;

    for (const char& c : password) {
        if (c >= 'A' && c <= 'Z') {
            hasUpper = true;
        } else if (c >= 'a' && c <= 'z') {
            hasLower = true;
        } else if (c >= '0' && c <= '9') {
            hasnumber = true;
        }
    }

    if (hasUpper && hasLower && hasnumber) { return true; }
    else { return false; }
}