#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	Student(int hakbun, const char* name)
		: hakbun_(hakbun)
	{
		this->hakbun_ = hakbun;
		name_ = new char[18];
		strcpy(name_, name);
		cout << "생성자 호출 완료" << endl;
	}

	Student(){}

	Student(const Student& rhs)
		:hakbun_(rhs.hakbun_)
	{
		name_ = new char[strlen(rhs.name_)+1];	// 널 문자 공간을 위해 +1
		strcpy(name_,rhs.name_);
		cout << "복사생성자 호출" << endl;
	}

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
	Student stu = Student(2115, "윤주영");
	Student stu2 = stu;
}