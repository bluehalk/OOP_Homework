#include<iostream>
using namespace std;
double triangleArea(const double* parray) {
	//应用海伦公式求面积
	double C = (parray[0] + parray[1] + parray[2]) / 2;
	double S = (double)sqrt(C * (C - parray[0]) * (C - parray[1]) * (C - parray[2]));
	return S;
}
int main() {
	double bianchang[3];
	cout << "请依次输入三条边长：";
	for (int i = 0; i < 3; i++) {
		cin >> bianchang[i];
	}
	cout << triangleArea(bianchang) << endl;
	return 0;
}