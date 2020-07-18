#include <iostream>
using namespace std;

//class Car {
//public:
//	int m_age;
//	static int m_price;
//	static void run() {
//		cout << "run()" << endl;
//	}
//	static void other();
//
//	void test() {
//		other();
//		run();
//		m_price = 10;
//	}
//};

// 在类外面初始化成员变量
//int Car::m_price = 0;

class Car {
private:
	// m member
	// s static
	static int ms_count;
public:
	Car() {
		// 严格来说，这里要考虑多线程安全问题
		ms_count++;
	}
	~Car() {
		ms_count--;
	}
	static int getCount() {
		return ms_count;
	}
};

int Car::ms_count = 0;

Car g_car;

int main() {
	Car car;
	Car* p = new Car();
	delete p;
	cout << Car::getCount() << endl;

	/*cout << &Student::m_age << endl;
	cout << &Person::m_age << endl;*/
	// Car::run();

	/*Car car;
	car.run();
	Car *p = &car;
	p->run();
	Car::run();*/

	/*Car car1;
	car1.m_age = 1;
	car1.m_price = 2;
	Car car2;
	car2.m_price = 200;
	Car car3;
	car3.m_price = 300;
	Car *p = new Car();
	p->m_price = 400;
	delete p;
	cout << Car::m_price << endl;*/

	getchar();
	return 0;
}