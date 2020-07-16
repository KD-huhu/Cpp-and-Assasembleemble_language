#include <iostream>
using namespace std;

struct Person {
	// 存在多个成员变量
	// 当成员变量的类型不同时，遵循内存对齐的方法
	// 尽可能的将所有的成员变量连续分布
	int m_id;
	int m_age;
	int m_height;

	void display() {
		cout << "id = " << m_id
			<< ", age = " << m_age
			<< ", height = " << m_height << endl;
	}
};

// 全局区（数据段）
// 也就是堆空间
// Person person;

int main() {
	// cout << sizeof(Person) << endl;
	// 输出12字节
	// 说明所有的成员变量在内存中是连续排列的

	// 这个person对象内存在栈空间
	// 定义在函数内部，局部变量
	// 会自动回收
	Person person;
	person.m_id = 1;
	person.m_age = 2;
	person.m_height = 3;

	// 打印内存地址值
	cout << "&person == " << &person << endl;
	cout << "&person.m_id == " << &person.m_id << endl;
	// person 的地址就是person.m_id 的地址
	cout << "&person.m_age == " << &person.m_age << endl;
	cout << "&person.m_height == " << &person.m_height << endl;

	getchar();
	return 0;
}