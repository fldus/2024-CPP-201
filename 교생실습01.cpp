# include <iostream>
using namespace std;

class Animal {
public :
	string name;
	int weight;
};

class Cat : public Animal {
private:
	int id;
public:
	Cat(int id, const string name, int weight);
	// �Ļ� Ŭ������ ������ ����
};

Cat::Cat(int id, const string name, int weight) : Animal{ name, weight } {
	// �Ļ� Ŭ������ ������ ȣ��
	this->id = id;	// �Ļ� Ŭ������ ��� ���� �ʱ�ȭ
}

int main() {
	return 0;
}