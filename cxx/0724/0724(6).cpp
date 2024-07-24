#include <iostream>
using namespace std;

int main()
{
	int count = 5;
	short status = 2;
	double radius = '5.0';

	int* pCount = &count;
	short* pStatus = &status;
	double* pRadius = &radius;

	cout << pCount << " " << *pCount << endl;
	cout << pStatus << " " << *pStatus << endl;
	cout << pRadius << " " << *pRadius << endl;


	return 0;
}