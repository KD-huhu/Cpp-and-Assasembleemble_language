#include <iostream>
using namespace std;

#define sum(x) (x+x)

inline int sum1(int x) {
	return x + x;
}

inline int add(int v) {
	return v + v;
}

int main() {
	//int a = 10;
	//int c = add(++a);
	//cout << c << endl;

	int a = 1;
	int b = 2;

	//(a = b) = 3;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	
	(a > b ? a : b) = 4;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//int a = 10;
	//cout << "sum(10++) = " << sum(a++) << endl;
	//cout << "a = " << a << endl;
	//int b = 10;
	//cout << "sum1(10++) = " << sum1(b++) << endl;
	//cout << "b = " << b << endl;

	getchar();
	return 0;
}