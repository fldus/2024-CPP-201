#include <iostream>
#include <string>
using namespace std;

// 클래스는 디폴트가 private
class Student {
public:
	Student(int hakbun, string name){	// 생성자
		hakbun_ = hakbun;
		name_ = name;
	}
	Student() {	// 생성자 오버로딩
		hakbun_ = 2121;
		name_ = "JWP";
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
	// 매개변수가 있는 생성자 호출
	Student juyoung = Student(2115, "윤주영");
	Student jwp = Student();

	juyoung.print();
	jwp.print();
}