#include<iostream>

int global = 1;
// 加inline变成内联函数 挪到主程序去
// inline只适合小逻辑四五行的小代码，代码复杂的话编译器不会把他当成内联函数
// 所以二叉树有一个inline int的小程序是有道理的
inline int sum(int a, int b, int c = 20) { 
	return int(a + b + c);
}

/*
* 不能构成函数重载
Case1:
void fun()
void fun(int a =10)

Case2:必须得函数类型相同
int test(int a) {
	std::cout << "hi";
	return 1;
}
double test(int a) {
	std::cout << "hello";
	return 1;
}
Case3:
void fun(int &)
void fun(int &)
*/

int test(int a) {
	std::cout << "hi";
	return 1;
}
int test(double a) {
	std::cout << "hello";
	return 1;
}
int main() {
	double f = 1.234;
	int i = (int)(2*f + f*f); // c
	int j = int(2*f + f*f); // c++ style -> function style
	
	int global = 10; //local parameter
	// address dynamically allocated, change everytime
	std::cout << ::global << ' ' << &(::global) << std::endl; // 加注释会变
	std::cout << global << ' ' << &global << std::endl; // 发现每次不一样
	std::cout << "i:" << &i << std::endl;
	std::cout << "j:" << &j << std::endl;
	std::cout << sizeof(i) << std::endl;
	int k = sum(20, 90);
	int t = test(3.4);
	return 0;
}