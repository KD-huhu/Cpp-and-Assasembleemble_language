#include <iostream>
using namespace std;

void test1() {
	// 引用的基础
	int age = 10;
	int height = 20;
	// 定义了一个age的引用，ref相当于是age的别名
	int& ref = age;
	int& ref1 = ref;
	int& ref2 = ref1;
	ref += 10;
	ref1 += 10;
	ref2 += 10;
	cout << age << endl;
}
// 无法实现交换两个数据
//void swap(int v1, int v2) {
//	int tmp = v1;
//	v1 = v2;
//	v2 = tmp;
//}

// 使用指针实现交换
//void swap(int *v1, int *v2) {
//	int tmp = *v1;
//	*v1 = *v2;
//	*v2 = tmp;
//}

// 使用引用简化代码
void swap(int& v1, int& v2) {
	int tmp = v1;
	v1 = v2;
	v2 = tmp;
}

void test2() {
	int a = 10;
	int b = 20;
	// 使用指针实现交换
	// swap(&a, &b);
	// 使用引用实现交换
	swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	int c = 2;
	int d = 3;
	// 可以多次使用引用，因为在函数中每一次被调用会创建一个新的内存空间
	// 每一次调用中的引用不会出现矛盾
	swap(c, d);
	cout << "c = " << c << ", d = " << d << endl;
}

struct Student {
	int &age;
};

// x86: 32bit
// x64: 64bit
int main() {
	// cout << sizeof(Student) << endl;
	// 引用和指针的关系
	int age = 10;
	// *p就是age的别名
	int* p = &age;
	*p = 30;
	// ref就是age的别名
	int& ref = age;
	ref = 30;
	int a = 3;
	int b = a + 1;

	getchar();
	return 0;
}