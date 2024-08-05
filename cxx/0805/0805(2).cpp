#include <iostream>
using namespace std;


int main() {
	
	int a;
	int *pA;
	// pA변수를 포인터로 선언

	a = 5;
	pA = &a;
	// 변수 a의 주소를 pA에 저장

	cout << "변수의 값은 " << a << "입니다. \n";
	cout << "변수 a의 주소는 " << &a << "입니다. \n";
	cout << "포인터 pA의 값은 " << pA << "입니다.";

	return 0;
}