#include<iostream>

int global = 1;
// ��inline����������� Ų��������ȥ
// inlineֻ�ʺ�С�߼������е�С���룬���븴�ӵĻ��������������������������
// ���Զ�������һ��inline int��С�������е����
inline int sum(int a, int b, int c = 20) { 
	return int(a + b + c);
}

/*
* ���ܹ��ɺ�������
Case1:
void fun()
void fun(int a =10)

Case2:����ú���������ͬ
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
	std::cout << ::global << ' ' << &(::global) << std::endl; // ��ע�ͻ��
	std::cout << global << ' ' << &global << std::endl; // ����ÿ�β�һ��
	std::cout << "i:" << &i << std::endl;
	std::cout << "j:" << &j << std::endl;
	std::cout << sizeof(i) << std::endl;
	int k = sum(20, 90);
	int t = test(3.4);
	return 0;
}