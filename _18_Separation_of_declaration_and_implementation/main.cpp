#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	Person person;
	person.setAge(10);

	cout << person.getAge() << endl;

	getchar();
	return 0;
}