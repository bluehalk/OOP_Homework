#include<iostream>
using namespace std;
double triangleArea(const double* parray) {
	//Ӧ�ú��׹�ʽ�����
	double C = (parray[0] + parray[1] + parray[2]) / 2;
	double S = (double)sqrt(C * (C - parray[0]) * (C - parray[1]) * (C - parray[2]));
	return S;
}
int main() {
	double bianchang[3];
	cout << "���������������߳���";
	for (int i = 0; i < 3; i++) {
		cin >> bianchang[i];
	}
	cout << triangleArea(bianchang) << endl;
	return 0;
}