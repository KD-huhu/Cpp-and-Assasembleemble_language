#include <iostream>
using namespace std;

class Car {
public:
	// 直接初始化
	// const int m_price = 0;
	// 初始化列表初始化
	// Car() :m_price(0) {}
	int m_price;

	void run() const {
		cout << "run() const" << endl;
	}

	/*void run() {
		cout << "run()" << endl;
	}*/
};

int main() {
	Car car;
	car.run();

	const Car car2;
	car2.run();

	getchar();
	return 0;
}