#include <iostream>
using namespace std;


int main() {
    int test[5];

    test[0] = 10;
    test[1] = 20;
    test[2] = 30;
    test[3] = 40;
    test[4] = 50;

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "번째 학생의 점수는 " << test[i] << "입니다.\n";
    }

    return 0;
}
