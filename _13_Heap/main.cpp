#include <iostream>
using namespace std;

void test() {
	// malloc会返回申请堆空间的首个字节的地址
	// 返回值是void*，需要使用强转
	// int类型是4个字节
	int* p = (int*)malloc(4);
	*p = 10;

	// 一个char类型1个字节
	/*char *p = (char *) malloc(4);
	p[0] = 10;
	p[1] = 11;
	p[2] = 12;
	p[3] = 13;*/
	/*
	// 等价于
	// 仅赋值给第一个字节
	*p = 10;
	*(p + 1) = 11;
	*(p + 2) = 12;
	*(p + 3) = 13;
	*/
	// 堆空间要自己回收
	// free中传入回收的首地址
	// 注意：只能够回收一次
	// 注意：申请的地址必须一次申请一次回收
	free(p);
}

void test2() {
	// new就是像堆空间申请内存
	// 并且申请4个字节
	// 符合int类型
	/*int *p = new int;
	*p = 10;
	delete p;*/

	/*char *p = new char;
	*p = 10;
	delete p;*/

	char* p = new char[4];
	delete[] p;
}

void test3() {
	// 特殊的初始化方式
	// int *p = (int *) malloc(4);
	// *p = 0;

	int size = sizeof(int) * 10;
	int* p = (int*)malloc(size);
	memset(p, 0, size);

	// 从p地址开始的连续4个字节中的每一个字节都设置为1
	// memset(p, 1, 4);
}

void test4() {
	int* p0 = new int;
	int* p1 = new int();
	int* p2 = new int(5);
	cout << *p0 << endl;
	cout << *p1 << endl;
	cout << *p2 << endl;
}

int main() {
	test4();

	getchar();
	return 0;
}