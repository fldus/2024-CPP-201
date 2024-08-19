﻿#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age)
		: name_(name), age_(age)
	{
		cout << "이름 " << name_ << endl;
		cout << "나이 " << age_ << endl;
	}
	void bark()
	{
		cout << "잘 짖는다" << endl;
	}

	void sleep()
	{
		cout << "잘 잔다" << endl;
	}

	void eat()
	{
		cout << "잘 먹는다" << endl;
	}

private:
	string name_;
	unsigned int age_;
};

class Human : public Animal {
public:
	// 부모(Animal) 생성자가 먼저 호출된다.
	Human(string name, unsigned int age, bool right)
		: Animal(name, age), right_(right)
	{
		cout << "인권존재여부" << right_ << endl;
	}

	// TODO : 정적바인딩을 동적바인딩으로 고치기
	void bark()
	{
		cout << "톡톡" << endl;
	}

	void sleep()
	{
		cout << "쿨쿨" << endl;
	}

	void eat()
	{
		cout << "얌얌" << endl;
	}
private:
	bool right_;
};
void main(void)
{
	Animal* ani = new Animal("ani", 18);
	ani->bark();
	ani->sleep();
	ani->eat();
	delete ani;
	
	// ani의 자료형은 Animal*
	ani = new Human("hum", 18, true);
	// 정적바인딩으로 인해 Animal의 멤버함수가 호출됨
	ani->bark();
	ani->sleep();
	ani->eat();

	delete ani;
}