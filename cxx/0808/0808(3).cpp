#include <iostream>
#include <cstring>  // 문자열 처리를 위해 cstring 헤더 추가
using namespace std;

int main() {
    char str0[20];
    char str1[10];
    char str2[10];

    strcpy(str1, "Hello");
    // str1에 "Hello"를 복사한다.
    strcpy(str2, "Goodbye");
    // str2에 "Goodbye"를 복사한다.
    strcpy(str0, str1);  // str0에 str1 복사
    strcat(str0, str2);  // str0 끝에 str2 추가

    cout << "배열 str1은 " << str1 << "입니다.\n";
    cout << "배열 str2는 " << str2 << "입니다.\n";
    cout << "연결하면 " << str0 << "입니다.\n";

    return 0;
}
