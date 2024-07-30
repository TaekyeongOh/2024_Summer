#include <iostream>
using namespace std;

int main() {
	int i;
	double d;
	char str[100];

	cout << "정수값을 입력하시오. ";
	cin >> i;
	cout << "실수값을 입력하시오. ";
	cin >> d;
	cout << "문자열을 입력하시오. ";
	cin >> str;

	cout << "입력한 정수값은 " << i << "입니다.\n";
	cout << "입력한 입수 값은 " << d << "입니다.\n";
	cout << "입력한 문자열은 " << str << "입니다.\n";

	return 0;
}