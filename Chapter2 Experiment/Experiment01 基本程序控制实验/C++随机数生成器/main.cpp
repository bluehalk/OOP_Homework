#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
srand((unsigned)(time(0)));
int a, b;


void work() {
	for (int i = 0; i < num; i++) {
		double val = a + (double)(rand()) / RAND_MAX * (b - a);
		cout << fixed << setprecision(2) <<  val << '\n';
	}
}




int main() {
	cout << "请输入数值区间a和b：";
	cin >> a >> b;
	cout << "请输入数值精度位数：";
	cin >> precision;
	cout << "请输入随机数的数目：";
	cin >> num;
	work();
	return 0;
}