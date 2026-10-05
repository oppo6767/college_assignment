#include <iostream>
using namespace std;

class BankingServices {
    private:
        string type;              // 계좌 종류
        int amount;               // 금액
        int period;               // 기간
        double rate;              // 이자율

    public:
        void init(string t, int a, int p, double r) {
            type = t;
            amount = a;
            period = p;
            rate = r;
        }

        // 타입별 이자 계산
        int calculateInterest() {
            return amount * rate * (period/365.0);
        }

        string getType() {
            return type;
        }
};

int main() {
    BankingServices td;
    BankingServices ca;

    td.init("정기예금", 1000000, 365, 0.05);
    cout << td.getType() << ": " << td.calculateInterest() << endl;

    ca.init("보통예금", 1000000, 1, 0.01);
    cout << ca.getType() << ": " << ca.calculateInterest() << endl;

    return 0;
}