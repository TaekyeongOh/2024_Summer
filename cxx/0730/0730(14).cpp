#include <iostream>
using namespace std;

int main() {
	int inum = 180;
	double dnum;

	cout << "신장은 " << inum << "센티미터이다.\n";
	cout << "double형의 변수에 대입한다.\n";

	dnum = inum;
	cout << "신장은 " << dnum << "센티미터이다.\n";

	return 0;
}