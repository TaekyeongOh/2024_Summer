#include <iostream>
using namespace std;

double avg(int t[]);

int main() {
    int test[5];

    cout << "5명의 시험 점수를 입력하시오.\n";
    for (int i = 0; i < 5; i++) {
        cin >> test[i];
    }
    double ans = avg(test);
    cout << "5명의 평균점은 " << ans << "점입니다.\n";
    
    return 0;
}

double avg(int t[]) {
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += t[i];
    }
    return sum / 5;
}