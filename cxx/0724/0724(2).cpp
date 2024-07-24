#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1;i <= 10;i++)
		sum += i;
	cout << "Sum from 1 to 10 is " << sum << endl;

	sum = 0;
	for (int i = 20;i <= 37;i++)
		sum += i;
	cout << "Sum from 20 to 37 is " << sum << endl;

	sum = 0;
	for (int i = 35; i <= 49;i++)
		sum += i;
	cout << "Sum from 35 to 49 is " << sum << endl;

	return 0;
}