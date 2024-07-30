#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int num = 0;

	cout << "1번째 정수 입력하세요=> ";
	cin >> num;
	sum += num;
	cout << "2번째 정수 입력하세요=> ";
	cin >> num;
	sum += num;
	cout << "3번째 정수 입력하세요=> ";
	cin >> num;
	sum += num;

	cout << "3개의 수의 합계는 " << sum << "이다.\n";

	return 0;
}