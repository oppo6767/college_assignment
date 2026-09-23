#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int cash = 50;
    int goal_amount = 250;
    int bets = 0;
    int wins = 0;
    int count = 0;

    cout << "초기 금액: $" << cash << endl;
    cout << "목표 금액: $" << goal_amount << endl;
    
    for (int i = 0; i < 1000; i++) {
        cash = 50;

        while (cash != goal_amount && cash > 0) {
            bets++;
            if ((double)rand()/RAND_MAX < 0.5) cash++;
            else cash--;
        }

        if (cash == goal_amount) wins++;

        count++;
    }

    cout << count << "중의 " << wins << "번 승리" << endl;
    cout << "이긴 확률 = " << ((double)wins/count) * 100 << endl;
    cout << "평균 배팅 횟수 = " << (double)bets/count << endl;

    return 0;
}