#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[100];

    cout << "문자열(영숫자)를 입력하시오. \n";
    
    cin >> str;

    cout << "문자열의 길이는 " << strlen(str) << "입니다.\\n";

    return 0;
}