#include <iostream>
using namespace std;

//struct Person {
//private:
//	int m_age;
//public:
//	void setAge(int age) {
//		m_age = age;
//	}
//	int getAge() {
//		return m_age;
//	}
//};
//
//struct Student : public Person {
//
//};
//
//struct GoodStudent : public Student {
//	void work() {}
//};

class Person {
private:
	int m_age;
public:
	void run() {}
};

class Student : public Person {};

class GoodStudent : public Student {};

int main() {
	//Person person;
	//person.m_age = 10;

	GoodStudent gs;
	gs.run();

	getchar();
	return 0;
}