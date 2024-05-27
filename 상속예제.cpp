#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;

public:
	//�⺻ ������
	Animal() {	// �⺻������ �ʱ�ȭ
		cout << name << "�⺻������" << endl;

	}

	// �Ű����� ������
	Animal(const string name, int weight)
		: name(name), weight(weight)	// �ɹ� �ʱ�ȭ
	{
		cout << name << "�� ���Դ� " << weight << "�Դϴ�." << endl;
		cout << "Animal ����" << endl;
	}
	
	~Animal() {
		cout << "Animal �Ҹ�" << endl;
	}
};

class Cat : public Animal {
public : 
	// �Ű����� ������
	Cat(const string name, int weight)
		: Animal()	// Animal Ŭ������ �Ű����� ������ ȣ��
		// Animal(name, weight)
	{
		cout << "Cat ����" << endl;
	}
	
	~Cat() { cout << "Cat �Ҹ�" << endl; }
};

// 'main' �Լ� ����
int main() {
	// Cat ��ü ����
	Cat cat("�̸������", 55);	// �̶� Animal�� �Ű����� ������ ȣ���
	return 0;
}