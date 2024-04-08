#include <iostream>
#include <string>
using namespace std;

// 클래스는 디폴트가 private
class Student {
public:
	// 생성자 - 객체를 생성할 때 호출되는 함수
	// 특징 - (return) 반환형이 없다.
	Student(int hakbun, string name){ 
		hakbun_ = hakbun;
		name_ = name;
	}
private:
	int hakbun_;	// 멤버변수 구분하기 위해 _ 붙임.
	string name_;
};

void main(void) {
	// 매개변수가 없는 생성자 호출
	// Student juyoung = Student();
	
	// 매개변수가 있는 생성자
	Student juyoung = Student(2115, "윤주영");

}