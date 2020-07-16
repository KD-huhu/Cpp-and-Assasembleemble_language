#include <iostream>
using namespace std;

int age = 33;

void test() {
	cout << "test()" << endl;
}
void display(int a = 11, int b = 22, int c = age, void (*func)() = test) {
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	cout << "c is " << c << endl;
	func();
}

int main() {
	display();
	return 0;
}