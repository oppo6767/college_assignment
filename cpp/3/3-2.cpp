#include <iostream>
using namespace std;

void count(const string& input, int alpCount[26]);

int main() {
    string input;
    int alpCount[26] = {0};
    cout << "문자열을 입력하세요: ";
    getline(cin, input);

    count(input, alpCount);
    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << ": " << alpCount[i] << endl;
    }

    /*
    for (int i = 0; i < 26; i++) {
        if (alpCount[i] > 0) {
            cout << char('a' + i) << ": " << alpCount[i] << endl;
        }
    }
    */
}

void count(const string& input, int alpCount[26]) {
    for (const char& c : input) {
        if (c >= 'a' && c <= 'z') {
            alpCount[c - 'a']++;
        }
    }
}