#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 0;

	b = a++;
	cout << "a는 대입 후에 증가한 것이고 b의 값은 " << b << "이다.\n";
	cout << "b=a++;을 수행한 후의 a의 값은 " << a << "이다.\n";
	a = 0; b = 0;
	b = ++a;
	cout << "a는 대입 전에 증가한 것이고 b의 값은 " << b << "이다.\n";
	cout << "b=a++;을 수행한 후의 a의 값은 " << a << "이다.\n";

	return 0;
}