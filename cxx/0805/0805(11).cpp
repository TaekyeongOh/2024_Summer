#include <iostream>
using namespace std;


int main() {
	
	int a;
	int *pA;
	// pA변수를 포인터(위치 정보)로 선언

	a = 5;
	pA = &a;
	//코드에서 최초에 포인터 pA에 변수 a의 주소를 대입함. 즉, 포인터 pA가 변수 a를 가리키도록 함

	cout << "변수의 값은 " << a << "입니다. \n";
	cout << "변수 a의 주소는 " << &a << "입니다. \n";
	cout << "포인터 pA의 값은 " << pA << "입니다.\n";
	cout << "*pA의 값은 " << *pA << "입니다.";
	// 뒤에 pA에 * 연산자를 사용하면, 변수 a의 값을 알 수 있음. pA에 *를 붙인 *pA는 변수 a와 같음

	return 0;
}