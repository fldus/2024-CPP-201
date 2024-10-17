#include <iostream>
#include <string>
using namespace std;

class PrettyJ {
private:
	static int num_;
	int gam_;
	string name_;
public:
	PrettyJ(int gam, string name) : gam_(gam), name_(name)
	{
		num_++;
	}
	static int* get_address_num(void) { return &num_; }
	static int get_num(void) { 
		// gam_++;	// static 멤버함수에는 일반 멤버변수가 들어갈 수 없다.
		return num_;
	}
	int* get_address_gam(void){ return &gam_; }
	int get_gam(void) { return gam_; }
};
// static 멤버변수 초기화 = 바깥에서
int PrettyJ::num_ = 0;

void main(void)
{
	PrettyJ* jihye = new PrettyJ(508, "jihye");
	PrettyJ* juyoung = new PrettyJ(509, "juyoung");
	PrettyJ* jungmin = new PrettyJ(716, "jungmin");
	cout << "현재 맴버 인원은 : " << PrettyJ::get_num() << endl;
	
	PrettyJ* jiwoo = new PrettyJ(601, "jiwoo");
	cout << "현재 맴버 인원은 : " << PrettyJ::get_num() << endl << endl;

	cout << "jihye's   gam address" << jihye->get_address_gam() << endl;
	cout << "juyoung's gam address" << juyoung->get_address_gam() << endl;
	cout << "jungmin's gam address" << jungmin->get_address_gam() << endl;
	cout << "jiwoo's   gam address" << jiwoo->get_address_gam() << endl << endl;

	cout << "jihye's   num address" << jihye->get_address_num() << endl;
	cout << "juyoung's num address" << juyoung->get_address_num() << endl;
	cout << "jungmin's num address" << jungmin->get_address_num() << endl;
	cout << "jiwoo's   num address" << jiwoo->get_address_num() << endl << endl;

	delete jungmin;
	delete juyoung;
	delete jihye;
}