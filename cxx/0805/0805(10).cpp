#include <iostream>
using namespace std;


int main() {
    const int sub = 2;
    const int num = 5;

    int test[sub][num];

    test[0][0] = 90;
    test[0][1] = 80;
    test[0][2] = 40;
    test[0][3] = 50;
    test[0][4] = 60;
    test[1][0] = 70;
    test[1][1] = 20;
    test[1][2] = 30;
    test[1][3] = 70;
    test[1][4] = 50;

    for (int i = 0; i < num; i++) {
        cout << i + 1 << "번쨰의 학생의 국어 점수는 " << test[0][i] << " 입니다.\n";
        cout << i + 1 << "번쨰의 학생의 수학 점수는 " << test[1][i] << " 입니다.\n";
    }

    return 0;
}
