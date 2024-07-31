#include <iostream>
using namespace std;

int main() {
	double height, weight, result;

	cout << "신장(cm)을 입력하세요. ";
	cin >> height;

	cout << "몸무게(kg)를 입력하세요. ";
	cin >> weight;

	result = (weight / ((height / 100.0) * (height / 100.0)));

	cout << "BMI 지수는 " << result << "입니다.\n";

	if (result >= 40)
		cout << "제 4도 비만입니다.";
	else if (result >= 35)
		cout << "제 3도 비만입니다.";
	else if (result >= 30)
		cout << "제 2도 비만입니다.";
	else if (result >= 25)
		cout << "제 1도 비만입니다.";
	else if (result >= 18.5)
		cout << "적정 체중입니다.";
	else
		cout << "체중 미달입니다.";

	return 0;
}