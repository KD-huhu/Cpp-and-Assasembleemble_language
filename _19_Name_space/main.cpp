#include <iostream>
#include "Person.h"
using namespace std;

//namespace KD {
//	int g_age;
//	void func() {
//	}
//	class Person {
//		int m_age;
//		int m_money;
//	};
//}

//namespace KD {
//	int g_age;
//}
//
//namespace XY {
//	int g_age;
//}

void func() {
	cout << "func()" << endl;
}

namespace KD {
	void func() {
		cout << "MJ::func()" << endl;
	}
}

int main() {
	using namespace KD;
	/*using namespace KD;
	KD::func();
	::func();
	::KD::func();

	Person person;*/

	/*using namespace KD;
	using namespace XY;

	XY::g_age = 10;*/

	// using MJ::g_age;
	// g_age = 10;

	/*using namespace KD;

	g_age = 10;
	func();
	Person person;*/

	// KD::g_age = 10;
	// KD::func();
	// KD::Person person;

	// cout << sizeof(person) << endl;
	getchar();
	return 0;
}