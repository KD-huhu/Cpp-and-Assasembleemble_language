#include <iostream>
using namespace std;

struct Animal {
	virtual void speak() = 0;
	virtual void run() = 0;
};

struct Dog : Animal {
	void run() {
		cout << "Dog::run()" << endl;
	}
};

struct Hashiqi : Dog {
	void speak() {
		cout << "Hashiqi::speak()" << endl;
	}
};

int main() {
	getchar();
	return 0;
}