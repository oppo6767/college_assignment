#include <iostream>
#include <vector>
using namespace std;

class Contact {
    private:
        string name;
        string tel;
    
    public:
        Contact(string n="null", string t="null") {
            name = n;
            tel = t;
        }

        void setName(string n) { name = n; }
        void setTel(string t) { tel = t; }
        string getName() { return name; }
        string getTel() { return tel; }
};

int main() {
    vector<Contact> vec(3);
    for (int i = 0; i < 3; i++) {
        string name;
        string tel;
        cout << "이름을 입력하시오 : ";
        cin >> name;
        cout << "전화번호를 입력하시오 : ";
        cin >> tel;
        vec[i].setName(name);
        vec[i].setTel(tel);
    }

    string fineName;
    cout << "탐색하고 싶은 이름을 입력하시오 : ";
    cin >> fineName;

    for (Contact findInfo : vec) {
        if (findInfo.getName() == fineName) {
            cout << "전화번호 : " << findInfo.getTel() << endl;
            return 0;
        }
    }
    cout << "연락처에 저장된 이름이 없습니다" << endl;

    return 1;
}