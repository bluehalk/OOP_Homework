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
	cout << "随机数如下（每行输出5个值）：\n";
	for (int i = 0; i < num; i++) {
		double val = a + (double)(rand()) / RAND_MAX * (b - a);
		vec.push_back(val);
		cout << fixed << setprecision(2) << val << ((i + 1) % 5 == 0 ? '\n' : ' ');
	}
	double sum = accumulate(vec.begin(), vec.end(), 0.0);
	int n = vec.size();
	double average = sum / n;
	cout << "均值：" << average << '\n';
	double biaozhuncha = 0;
	for (int i = 0; i < n; i++) {
		biaozhuncha += (vec[i] - average) * (vec[i] - average) / n;
	}
	cout << "标准差：" << biaozhuncha << '\n';
}
int main() {
	srand((unsigned)(time(0)));
	cout << "请输入数值区间a和b：";
	cin >> a >> b;
	cout << "请输入数值精度位数：";
	cin >> precision;
	cout << "请输入随机数的数目：";
	cin >> num;
	GenerateRandNumbers();
	return 0;
}