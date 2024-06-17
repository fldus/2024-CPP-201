#include <iostream>
#include <string>
using namespace std;

class Name {
public:
	Name(string name, int age)
		: name_(name), age_(age)
	{
		cout << "부모생성자 호출" << endl;
	}
	~Name()
	{
		cout << "부모소멸자 호출" << endl;
	}

	void print() {
		cout << name_ << "은/는 " << age_ << "살 입니다." << endl;
	}

private:
	string name_;
	int age_;
};

class Cat : public Name {
public:
	Cat(string name, int age) : Name(name, age)
	{
		cout << "자식생성자 호출" << endl;
	}
	~Cat()
	{
		cout << "자식소멸자 호출" << endl;
	}

	void say() {
		cout << "야옹" << endl;
		Name::print();
	}
};

int main(void)
{
	Cat cat = Cat("고양이", 10);
	cat.say();
	return 0;
}