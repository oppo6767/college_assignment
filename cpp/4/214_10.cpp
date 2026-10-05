#include <iostream>
using namespace std;

class BankAccount {
    private:
        string number;
        int balance;

    public:
        void init(string n, int b) {
            number = n;
            balance = b;
        }

        void deposit(int amount) {
            cout << "after deposit(" << amount << ") ";
            balance += amount;
        }

        void withdraw(int amount) {
            cout << "after withdraw(" << amount << ") ";
            balance -= amount;
        }

        int getBalance() {
            return balance;
        }
};

int main() {
    BankAccount account;
    account.init("1234", 1000000);
    cout << "현재 잔액: " << account.getBalance() << endl;

    account.deposit(1000000);
    cout << "현재 잔액: " << account.getBalance() << endl;

    account.withdraw(1000000);
    cout << "현재 잔액: " << account.getBalance() << endl;

    return 0;
}