#include <iostream>
using namespace std;

template <class T>
T maxt(T x, T y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	
	int a, b;
	double da, db;

	cout << "2개의 정수를 입력하세요.";
	cin >> a >> b;

	cout << "2개의 소수를 입력하세요. ";
	cin >> da >> db;

	int ans1 = max(a, b);
	double ans2 = max(da, db);

	cout << "정수값의 최대값은 " << ans1 << "입니다.\n";
	cout << "소수값의 최대값은 " << ans2 << "입니다.";

	return 0;
}