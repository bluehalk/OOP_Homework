#include<iostream>
using namespace std;
int function(int a) {
	return a % 2 == 0 ? 1 : 0;
}
inline int Inlinefunction(int a) {
	return a % 2 == 0 ? 1 : 0;
}
int main() {
	clock_t start = clock();
	for (int i = 0; i < 1000000; i++) {
		int result = function(i);
	}
	clock_t end = clock();
	double elapsed_time = (end - start);
	clock_t start_ = clock();
	for (int i = 0; i < 1000000; i++) {
		int result = Inlinefunction(i);
	}
	clock_t end_ = clock();
	double inline_elapsed_time = (end_ - start_);
	cout << "int函数的执行时间：" << elapsed_time << endl;
	cout << "inlilne int函数的执行时间：" << inline_elapsed_time << endl;
	return 0;
}
