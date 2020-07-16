#include <iostream>
using namespace std;

#include "math.h"

//extern "C" void func() {
//	cout << "func()" << endl;
//}

//extern "C" void func(int age) {
//	cout << "func(int age)" << age << endl;
//}

extern "C" void func(int age);

int main() {
	//cout << sum(10, 20) << endl;
	//cout << delta(30, 20) << endl;
	//cout << divide(30, 3) << endl;

	//func();
	func(22);

	getchar();
	return 0;
}

void func(int age) {
	cout << "func(int age)" << age << endl;
}