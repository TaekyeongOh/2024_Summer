if(radius>0){
	실행문
}

#include <iostream>
using namespace std;

int main()
{
    double radius;
    double area;
    double circumference;

    // 1단계: 반지름 읽기
    cout << "반지름을 입력하세요." << endl;
    cin >> radius;
    
    // 2단계: 면적 계산
    area = radius * radius * 3.14;
    circumference = 2 * radius * 3.14;
    // 3단계: 면적 출력
    if (radius > 0) {
        cout << "원의 넓이 : " << area << endl;
        cout << "원의 둘레 : " <<circumference << endl;
    }
    else {
        cout << "radius값이 0 또는 음수입니다." << endl;
    }
    

    return 0;
}


//성적에 따른 학점

#include <iostream>
using namespace std;

int main()
{
    double score;


    cout << "성적을 입력하세요." << endl;
    cin >> score;
    

    if (score >= 90) {
        cout << "Grade is A"  << endl;
    }
    else if (score>=80) {
        cout << "Grade is B" << endl;

    }
    else if (score >= 70) {
        cout << "Grade is C" << endl;

    }
    else if (score >= 60) {
        cout << "Grade is D" << endl;

    }
    else  {
        cout << "Grade is F" << endl;

    }
    

    return 0;
}