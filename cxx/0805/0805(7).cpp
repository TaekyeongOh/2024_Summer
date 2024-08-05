#include <iostream>
using namespace std;

// swap 함수의 정의
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    cout << "변수 num1의 값은 " << num1 << "입니다.\n";
    cout << "변수 num2의 값은 " << num2 << "입니다.\n";
    cout << "변수 num1과 num2의 값을 바꿉니다.\n";

    swap(num1, num2);

    cout << "변수 num1의 값은 " << num1 << "입니다.\n";
    cout << "변수 num2의 값은 " << num2 << "입니다.\n";

    return 0;
}
