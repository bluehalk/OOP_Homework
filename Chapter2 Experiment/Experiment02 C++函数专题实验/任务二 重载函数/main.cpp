#include<iostream>
using namespace std;
int commonDivisor(int a, int b) {
	return b == 0 ? a : commonDivisor(b, a % b);
}
int commonDivisor(int a, int b, int c) {
	int tmp = commonDivisor(a, b);
	return commonDivisor(tmp, c);
}
int commonDivisor(int a, int b, int c, int d) {
	int tmp = commonDivisor(a, b);
	int tmp2 = commonDivisor(c, d);
	return commonDivisor(tmp, tmp2);
}
int main() {
	cout << "请输入三个整数：";
	int a, b, c;
	cin >> a >> b >> c;
	cout << a << "," << b << "," << c << "的最大公约数是:" << commonDivisor(a, b, c) << endl;
	return 0;
}