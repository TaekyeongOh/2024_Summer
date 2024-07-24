#include <iostream>
using namespace std;

int main()
{
	double myList[100];
	for (int i = 0;i < 10;i++)
	{
		myList[i] = rand() % 100;
	}
	double max = myList[0];
	int indexOfMax = 0;
	for (int i = 1;i < 10;i++){
		if(myList[i]>max)
		{
			max = myList[i];
			indexOfMax = i;
		}
	}

	cout << "The maximum value is " << max << endl;
	cout << "The minimum value is " << indexOfMax << endl;

	return 0;
}