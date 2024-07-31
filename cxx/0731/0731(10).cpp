#include <iostream>
using namespace std;

int buy(int x, int y)
{
	int z;

	cout << x << "만원과 " << y << "만원의 차를 구입하였다.\n";

	z = x + y;

	return z;
}

int main() {
	
	int num1, num2, sum;

	cout << "얼마의 차를 구입하는가?";
	cin >> num1;
	cout << "얼마의 차를 구입하는가?";
	cin >> num2;

	sum = buy(num1, num2);

	cout << "합계" << sum << "만원이다.\n";

	return 0;
}