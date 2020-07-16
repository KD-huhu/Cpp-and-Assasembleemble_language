#include <iostream>
using namespace std;

// class Person {
// public:
//	// 成员变量（属性）
	// int age;
//	// 成员函数（方法）
	// void run() {
		// cout << "Person::run()" << endl;
	// }
// };

struct Person {
	// 成员变量（属性）
	int m_age;
	// 成员函数（方法）
	void run() {
		cout << "Person::run() - " << m_age << endl;
	}
};

void test() {
	// 利用类创建对象
	Person person;
	person.m_age = 20;
	person.run();
	// 指向类的指针
	Person* p = &person;
	// 通过指针修改成员变量
	p->m_age = 40;
	p->run();
}

class Car {
public:
	// 成员变量在不同的对象中不同
	// 所以成员变量对于不同的对象是唯一的
	int m_price;
	// 类中的成员函数并不存储在对象的内存中
	// 成员函数是所有的对象公用的
	void run() {
		cout << "Car::run() " << m_price << endl;
	}
};

int main() {
	// mov dword ptr [ebp-8],0Ah
	// mov dword ptr [ebp-8],0Ah
	// Car类中只有一个成员变量，所以car的地址就是其唯一成员变量的地址
	Car car;
	car.m_price = 10;
	// 调用成员函数的汇编代码
	// call 函数地址
	car.run();

	// 一个Car对象只占用4个字节
	Car car2;
	car2.m_price = 20;
	// call 函数地址
	// 调用的函数相同
	car2.run();

	getchar();
	return 0;
}