#include <iostream>
using namespace std;

int main()
{
    double radius;
    double area;

    // 1단계: 반지름 읽기
    radius = 5.0;

    // 2단계: 면적 계산
    area = radius * radius * 3.14;

    // 3단계: 면적 출력
    cout << area << endl;

    return 0;
}