#include <iostream>
using namespace std;

int main() {
	int even_sum, num, i, temp;

	even_sum = i = 0;

	cout << "임의의 수를 입력하세요.";
	cin >> num;

	temp = 1;
	do {
		if ((temp % 2) == 0) {
			even_sum += temp;
			cout << temp << "+";
			i++;
		}
		temp++;
	} while (temp <= num);
	cout << '\b' << "=" << even_sum << "\n";
	cout << "짝수의 개수 = " << i << "\n";

	return 0;
}