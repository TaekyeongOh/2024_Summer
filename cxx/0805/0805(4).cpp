#include <iostream>
using namespace std;


int main() {
    int test[5] = { 90,80,50,20,55 };

    cout << "test[0]의 값은 " << test[0] << "입니다.\n";
    cout << "test[1]의 값은 " << test[1] << " 입니다.\n";
    cout << "&test[0]의 주소는 " << &test[0] << "입니다.\n";
    cout << "test의 값은 " << test << "입니다.\n";
    cout << "즉 *test의 값은 " << test << " 입니다.\n";


    return 0;
}
