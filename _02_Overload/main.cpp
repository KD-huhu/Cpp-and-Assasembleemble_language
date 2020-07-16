#include <iostream>
using namespace std;

// display_v
void display() {
	cout << "display()" << endl;
}

// display_i
void display(int a) {
	cout << "display(int) - " << a << endl;
}

// display_l
void display(long a) {
	cout << "display(long) - " << a << endl;
}

// display_d
void display(double a) {
	cout << "display(double) - " << a << endl;
}

int main() {
	display();
	display(10);
	display(10L);
	display(10.0);

	getchar();
	return 0;
}