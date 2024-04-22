#include <iostream>
#include <string>
using namespace std;


class Student {
public:
	Student(int hakbun, char* name)
		: hakbun_(hakbun), name_(name)
	{
		this->hakbun_ = hakbun;
		// 동적할당
		name_ = new char[18];	// 멤버변수 할당 -> 소멸자 사용해야함.
		// 동적할당된 위치(name_)에 "윤주영"(name)을 복사한다.
		strcpy(name_, name);
		cout << "생성자 호출 완료" << endl;
	}

	Student(){}

	// 소멸자 - 객체가 사라질 때(메모리 공간이 헤제될 때) 호출되는 함수
	~Student()	 
	{
		delete []name_;
		cout << "소멸자 호출 완료" << endl;
	}

	void print() {
		cout << hakbun_ << name_ << endl;
	}

private:
	int hakbun_;
	char* name_;
};

void main(void) {
	Student* stu = new Student(2115, (char*)"윤주영");	// 객체 생성

	cout << "사필귀정" << endl;

	delete stu;	// 객체만 삭제

	cout << "고진감래" << endl;
}