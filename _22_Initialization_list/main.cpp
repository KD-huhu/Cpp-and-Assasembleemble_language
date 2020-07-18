#include <iostream>
using namespace std;

int func() { return 8; }

//struct Person {
//	int m_age;
//	int m_height;
//
//	/*Person(int age, int height) {
//		m_age = age;
//		m_height = height;
//	}*/
//
//	Person(int age = 0, int height = 0) :m_age(age), m_height(height) {}
//};

struct Person {
	int m_age;
	int m_height;
	Person(int age = 0, int height = 0);
};

//Person::Person(int age, int height) :m_age(func()), m_height(height) {
//
//}

Person::Person(int age = 0, int height = 0) :m_age(age), m_height(height) {

}

int main() {
	/*Person person1;
	Person person2(17);
	Person person(18, 180);

	cout << person.m_age << endl;
	cout << person.m_height << endl;*/

	getchar();
	return 0;
}