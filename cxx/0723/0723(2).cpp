#include <iostream>
using namespace std;

int main()
{
	char continueLoop = 'Y';
	while (continueLoop == 'Y')
	{
		cout << "Enter Y to continue and N to quit";
		cin >> continueLoop;
	}
}
// 입력받은 값에 따라 진행, 종료 결정