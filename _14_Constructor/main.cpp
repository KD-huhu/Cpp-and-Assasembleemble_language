#include <iostream>
using namespace std;

//struct Person {
//	int m_age;
//	Person() {
//		cout << "Person::Person()" << endl;
//	}
//	void run() {
//		cout << "Person::run() - " << m_age << endl;
//	}
//};
//
//void test2() {
//	Person *p = new Person;
//	delete p;
//	Person *p = (Person *) malloc(sizeof(Person));
//	p->m_age = 10;
//	p->run();
//	free(p);
//}

struct Person {
	int m_age;
	Person() {
		m_age = 0;
		cout << "Person()" << endl;
	}
	// 构造函数构成重载
	Person(int age) {
		m_age = age;
		cout << "Person(int age)" << endl;
	}
};

// 全局区
Person g_person0; 		// 调用Person()
Person g_person1(); 	// 函数声明，函数名g_person1，返回值是Person
Person g_person2(10); 	// 调用Person(int)

int main() {
	// 栈空间
	Person person0; 	// 调用Person()
	Person person1(); 	// 函数声明，函数名person1，返回值是Person
	Person person2(20); // 调用Person(int)
	// 堆空间
	Person* p0 = new Person; 		// 调用Person()
	Person* p1 = new Person(); 		// 调用Person()
	Person* p2 = new Person(30); 	// 调用Person(int)
	/* 4个无参，3个有参，一共创建了7个Person对象 */

	getchar();
	return 0;
}