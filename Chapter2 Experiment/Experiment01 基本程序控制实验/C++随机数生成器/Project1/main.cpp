#include<iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>
#include <numeric>
using namespace std;
int a, b;
int num, precision;

void GenerateRandNumbers() {
	vector<double> vec;
	cout << "��������£�ÿ�����5��ֵ����\n";
	for (int i = 0; i < num; i++) {
		double val = a + (double)(rand()) / RAND_MAX * (b - a);
		vec.push_back(val);
		cout << fixed << setprecision(2) << val << ((i + 1) % 5 == 0 ? '\n' : ' ');
	}
	double sum = accumulate(vec.begin(), vec.end(), 0.0);
	int n = vec.size();
	double average = sum / n;
	cout << "��ֵ��" << average << '\n';
	double biaozhuncha = 0;
	for (int i = 0; i < n; i++) {
		biaozhuncha += (vec[i] - average) * (vec[i] - average) / n;
	}
	cout << "��׼�" << biaozhuncha << '\n';
}
int main() {
	srand((unsigned)(time(0)));
	cout << "��������ֵ����a��b��";
	cin >> a >> b;
	cout << "��������ֵ����λ����";
	cin >> precision;
	cout << "���������������Ŀ��";
	cin >> num;
	GenerateRandNumbers();
	return 0;
}