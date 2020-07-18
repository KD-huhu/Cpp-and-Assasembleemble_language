#include <iostream>
using namespace std;

struct Person {
	int m_age;
	int m_height;

	// 构造函数调用构造函数必须在初始化列表中调用
	Person() :Person(10, 20) {
		// 创建了一个临时的Person对象
		// Person(10, 20);
	}

	Person(int age, int height) {
		this->m_age = age;
		this->m_height = height;
	}
};

int main() {
	Person person;
	cout << person.m_age << endl;
	cout << person.m_height << endl;

	getchar();
	return 0;
}