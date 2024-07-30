#include <iostream>
using namespace std;

int main() {
	cout << "123456789123456789123456789\n";
	for (int i = 0; i <= 10 ; i++) {
		cout.width(3);
		cout << i;
	}
	cout << "\n";

	return 0;
}