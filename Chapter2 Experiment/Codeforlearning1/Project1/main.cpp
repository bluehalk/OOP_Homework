#include<iostream>
using namespace std;
// ctrl + k + f(format) 格式化
// ctrl 点击 Ctrl + -
// 解决冲突 fn + f10
// 断点f10 10不要进去，走马观花一条过逐过程
// f11 逐语句，会进到函数内部
int global = 100;

void func(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
// 8 ——> CPU寄存器（拔不出来，在CPU上，几十KB），内存都直接可以拔出来。——> c
//有数据中转，所以慢一点
int& add(int a, int b)
{
	global = a + b;
	return global; // 不接受表达式
}



int main() {
	int a = 3;
	int &b = a; // b是a的别名，可以作为左值和右值
	int c = b;
	//cout << *&a << endl;
	func(a, b);
	int d = add(a, b);
	//add（a，b）是个int&类型，是global的复制版
	cout << "global address " <<  & global << endl;
	cout << "引用地址：" << & add(a, b) << endl;
	cout << add(a, b) << endl;
	return 0;
}