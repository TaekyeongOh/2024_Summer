#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}

int main()
{
	int i = 5;
	int j = 2;

	int k = sum(i, j);

	cout << "The maximum between " << i << " and " << j << " is " << k << endl;
	

	return 0;
}