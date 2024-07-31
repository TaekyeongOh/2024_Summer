#include <iostream>
using namespace std;
int max(int x, int y);
double max(double x, double y);

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

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

double max(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}