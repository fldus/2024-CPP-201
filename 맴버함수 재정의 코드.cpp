#include <iostream>
using namespace std;

// �θ� Ŭ����
class Animal {
public:
	void PrintMethod() 
	{
		cout << "�θ� �����" << endl;
	}
};

// �ڽ� Ŭ����
class Cat : public Animal {
public:
	void PrintMethod() {
		Animal::PrintMethod();
		cout << "�ڽ� �����" << endl;
	}
};

int main() {
	Cat cat;
	cat.PrintMethod();	// �ùٸ��� �������̵��� �޼ҵ尡 ȣ���

	return 0;
}