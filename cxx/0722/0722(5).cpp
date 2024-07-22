#include <iostream>
using namespace std;

int main()
{
	cout << "이름을 입력하세요." << endl;

	char name[256];
	// 사용자로부터 입력받은 이름을 저장하기 위한 공간을 할당하는 부분
	cin >> name;

	cout << name << "님 C++세계에 오신 것을 환영합니다." << endl;

	return 0;
}