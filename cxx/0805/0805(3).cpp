#include <iostream>
using namespace std;


int main() {
    const int num = 5;
    int test[num];

    cout << num << "명의 학생의 점수를 입력하세요.\n";
    for (int i = 0; i < num; i++) {
        cin >> test[i];
    }
    for (int j = 0; j < num-1; j++) {
        for (int t = j + 1; t < num; t++) {
            if (test[t] > test[j]) {
                int tmp = test[t];
                test[t] = test[j];
                test[j] = tmp;
            }
        }
    }
    for (int s = 0; s < num; s++) {
        cout << s + 1 << "번째 학생의 점수는 " << test[s] << " 입니다.\n";
    }

    return 0;
}
