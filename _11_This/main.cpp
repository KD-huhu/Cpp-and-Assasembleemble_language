#include <iostream>
using namespace std;

struct Person {
	int m_id;
	int m_age;
	int m_height;

	void display() {
		// 中断：interrupt
		// cc -> int3 ：起到断点的作用
		// int3int3int3
		// eax == &person.m_age == &person + 4
		// mov eax, dword ptr [this]
		// [eax]、[eax + 4]、[eax + 8]
		// [&person + 4]、[&person + 4 + 4]、[&person + 4 + 8]
		cout << "id = " << m_id
			<< ", age = " << m_age
			<< ", height = " << m_height << endl;
	}
};

void test() {
	Person person;
	person.m_id = 10;
	person.m_age = 20;
	person.m_height = 30;
	person.display();

	Person* p = &person;
	p->m_id = 10;
	p->m_age = 10;
	p->m_height = 10;
	p->display();
}

int main() {
	Person person;
	person.m_id = 10;
	person.m_age = 20;
	person.m_height = 30;

	Person* p = (Person*)&person.m_age;
	p->m_id = 40;
	p->m_age = 50;
	// person.display();
	// 输出结果： 10 40 50

	p->display();
	// 输出结果： 40 50 乱码

	cout << 0xCC << endl;
	
	getchar();
	return 0;
}