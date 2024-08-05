#include <iostream>
using namespace std;

// swap 함수의 전달
void swap(int* pX, int* pY);
int main() {
	
	int num1 = 10;
	int num2 = 20;

	cout << "변수 num1의 값은 " << num1 << "입니다.\n";
	cout << "변수 num2의 값은 " << num2 << "입니다.\n";
	cout << "변수 num1과 num2의 값을 교환합니다.\n";

	swap(&num1, &num2);
	// swap 함수를 호출할 때에 변수 num1과 num2의 주소(&num1, &num2)를 전달힘

	cout << "변수 num1의 값은 " << num1 << "입니다. \n";
	cout << "변수 num2의 값은 " << num2 << "입니다. \n";

	return 0;
}

void swap(int* pX, int* pY)
{
	int tmp;

	tmp = *pX;
	*pX = *pY;
	*pY = tmp;
	// 간접 참조 연산자(*)를 사용해 x와 y값을 서로 교환함
}