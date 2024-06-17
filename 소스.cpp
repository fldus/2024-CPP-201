#include <iostream>
#include <string>
using namespace std;

class Name {
public:
	Name(string name, int age)
		: name_(name), age_(age)
	{
		cout << "�θ������ ȣ��" << endl;
	}
	~Name()
	{
		cout << "�θ�Ҹ��� ȣ��" << endl;
	}

	void print() {
		cout << name_ << "��/�� " << age_ << "�� �Դϴ�." << endl;
	}

private:
	string name_;
	int age_;
};

class Cat : public Name {
public:
	Cat(string name, int age) : Name(name, age)
	{
		cout << "�ڽĻ����� ȣ��" << endl;
	}
	~Cat()
	{
		cout << "�ڽļҸ��� ȣ��" << endl;
	}

	void say() {
		cout << "�߿�" << endl;
		Name::print();
	}
};

int main(void)
{
	Cat cat = Cat("�����", 10);
	cat.say();
	return 0;
}