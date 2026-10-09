#include <iostream>
using namespace std;

class BankAccount {
    private:
        int balance;
        double rate;

    public:
        BankAccount(int balance=0, double rate=0.05);

        void deposit(int amount) {
            balance += amount;
        }

        void withdraw(int amount) {
            if (amount <= balance) {
                balance -= amount;
            } else {
                cout << "잔액이 부족합니다." << endl;
            }
        }

        int getBalance() {
            return balance;
        }
};

BankAccount::BankAccount(int balance, double rate): balance{balance}, rate{rate} {}

int main() {
    BankAccount account1{1000};
    cout << "기본 금액: " << account1.getBalance() << endl;

    account1.deposit(500);
    cout << "입금 후 잔액: " << account1.getBalance() << endl;

    account1.withdraw(200);
    cout << "출금 후 잔액: " << account1.getBalance() << endl;

    return 0;
}