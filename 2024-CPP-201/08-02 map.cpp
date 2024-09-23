#include <iostream>
#include <map>
#include <string>
using namespace std;

void main(void)
{
	map<string, int> Guardian;

	// 요소 추가
	Guardian["김신"] = 939;
	Guardian["지은탁"] = 19;
	Guardian["저승사자"] = 300;
	Guardian["써니"] = 29;
	Guardian["유덕화"] = 25;

	// 요소 접근
	cout << "김신의 나이 : " << Guardian["김신"] << endl;
	cout << "저승사자의 나이 : " << Guardian["저승사자"] << endl;

	// 요소 수정
	Guardian["지은탁"] = 29;

	// 요소 갯수(size)
	cout << Guardian.size() << endl;

	// 모든 요소 출력(first = key / second = value)
	map<string, int>::iterator iter;
	for (iter = Guardian.begin(); iter != Guardian.end(); iter++)
		cout << (*iter).first << "는 " << iter->second << "살" << endl;
}