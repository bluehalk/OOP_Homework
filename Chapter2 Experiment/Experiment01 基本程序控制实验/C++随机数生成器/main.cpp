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
	cout << "��������ֵ����a��b��";
	cin >> a >> b;
	cout << "��������ֵ����λ����";
	cin >> precision;
	cout << "���������������Ŀ��";
	cin >> num;
	work();
	return 0;
}