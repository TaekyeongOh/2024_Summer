#include <iostream>
using namespace std;

int main() {
	int num;
	int sum=0;

	cout << "몇까지의 합계를 구할까요? ";

	cin >> num;

	for (int i = 1; i <= num; i++)
		sum += i;

	cout << "1부터 " << num << "까지의 합계는 " << sum;

	return 0;
}