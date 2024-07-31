#include <iostream>
using namespace std;

int main() {
	double num1, num2, result;
	char oper;

	cout << "두 개의 정수를 입력하세요. ";
	cin >> num1 >> num2;

	cout << "사칙연산자(+,-,*,/)중 하나를 입력하세요. ";
	cin >> oper;

	switch (oper) {
	case'+':result = num1 + num2;
		cout << "덧셈을 수행했습니다.\n";
		break;
	case'-':result = num1 - num2;
		cout << "뺄셈을 수행했습니다.\n";
		break;
	case'*':result = num1 * num2;
		cout << "곱셈을 수행했습니다.\n";
		break;
	case'/':result = num1 / num2;
		cout << "나눗셈을 수행했습니다.\n";
		break;
	default:
		cout << num1 << oper << num2 << "=" << result << "\n";
	}

	return 0;
}