#include <iostream>
using namespace std;

int main()
{
	double myList[100];

	for (int i = 0; i < 100; i++)
	{
		myList[i] = rand() % 100;
	}
	cout << myList << endl;
	for (int i = 0; i < 100; i++) {
		cout << myList[i] << endl;
	}

	int total = 0;
	for (int i = 0; i < 100; i++)
	{
		total += myList[i]; //total=total+myList[i];
	}

	cout << "The sum is " << total << endl;

	double max = myList[0];
	double min = myList[0];

	for (int i = 1; i < 100;i++)
	{
		if (myList[i] >max) max = myList[i];
		if (myList[i] < min) min = myList[i];
	}

	cout << "The maximum value is " << max << endl;
	cout << "The minimum value is " << min << endl;
	cout << "The average is " << total / 100 << endl;

	return 0;
}