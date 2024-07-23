#include <iostream>
using namespace std;

int main()
{
	char continueLoop = 'Y';
	while (continueLoop == 'Y' || continueLoop == 'y')
	{
		cout << "Enter Y to continue and N to quit";
		cin >> continueLoop;
	}
}