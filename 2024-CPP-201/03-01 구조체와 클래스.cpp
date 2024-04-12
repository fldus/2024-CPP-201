#include <iostream>
#include <string>
using namespace std;

// 클래스는 디폴트가 private
class Student {
public:
	Student(int hakbun, string name)	// 생성자
		: hakbun_(hakbun), name_(name)
	{	
		cout << "학번이 등록되었습니다." << endl;
	}
	Student()	// 생성자 오버로딩
		: hakbun_(2121), name_("JWP")
	{
	}

	// 객체의 멤버를 출력하는 함수
	void print() {
		cout << "학번 : "<< hakbun_ << ", 이름 : " << name_ << endl;
	}

private:
	int hakbun_;
	string name_;
};

void main(void) {
	// 동적할당 : heqp 영역에 할당. 실행시간(run time)에 메모리 크기 결정
	Student* juyoung = new Student(2115, "윤주영");
	// 정적 할당 : stack 영역에 할당. 컴파일 시간에 메모리 크기 결정
	Student jwp = Student();

	juyoung->print();
	jwp.print();

	// 동적할당된 메모리 해제
	delete juyoung;
}