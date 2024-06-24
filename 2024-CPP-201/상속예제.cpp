#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;

public:
	//기본 생성자
	Animal() {	// 기본값으로 초기화
		cout << name << "기본생성자" << endl;

	}

	// 매개변수 생성자
	Animal(const string name, int weight)
		: name(name), weight(weight)	// 맴버 초기화
	{
		cout << name << "의 무게는 " << weight << "입니다." << endl;
		cout << "Animal 생성" << endl;
	}
	
	~Animal() {
		cout << "Animal 소멸" << endl;
	}
};

class Cat : public Animal {
public : 
	// 매개변수 생성자
	Cat(const string name, int weight)
		: Animal()	// Animal 클래스의 매개변수 생성자 호출
		// Animal(name, weight)
	{
		cout << "Cat 생성" << endl;
	}
	
	~Cat() { cout << "Cat 소멸" << endl; }
};

// 'main' 함수 정의
int main() {
	// Cat 객체 생성
	Cat cat("미림고양이", 55);	// 이때 Animal의 매개변수 생성자 호출됨
	return 0;
}