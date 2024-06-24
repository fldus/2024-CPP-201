#include <iostream>
using namespace std;

// 부모 클래스
class Animal {
public:
	void PrintMethod() 
	{
		cout << "부모 고양이" << endl;
	}
};

// 자식 클래스
class Cat : public Animal {
public:
	void PrintMethod() {
		Animal::PrintMethod();
		cout << "자식 고양이" << endl;
	}
};

int main() {
	Cat cat;
	cat.PrintMethod();	// 올바르게 오버라이딩된 메소드가 호출됨

	return 0;
}