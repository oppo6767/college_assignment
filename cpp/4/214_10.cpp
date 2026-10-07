#include <iostream>
using namespace std;

class BankAccount {
    private:
        string number;
        int balance;

    public:
        void init(string n, int b);
        void deposit(int amount);
        void withdraw(int amount);
        int getBalance();
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

void BankAccount::init(string n, int b) {
    number = n;
    balance = b;
}

void BankAccount::deposit(int amount) {
    cout << "after deposit(" << amount << ") ";
    balance += amount;
}

void BankAccount::withdraw(int amount) {
    cout << "after withdraw(" << amount << ") ";
    balance -= amount;
}

int BankAccount::getBalance() {
    return balance;
}
