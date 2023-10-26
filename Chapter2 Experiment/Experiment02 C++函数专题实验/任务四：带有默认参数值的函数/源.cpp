#include<iostream>
#include<vector>
using namespace std;

// low to high
void QuickSort1(vector<double>& q, int l, int r) {
	if (l >= r) return;
	int i = l - 1, j = r + 1, x = q[l + r + 1 >> 1];
	
	while (i < j) {
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}
	QuickSort1(q, l, i - 1), QuickSort1(q, i, r);
}
// high to low
void QuickSort2(vector<double>& q, int l, int r) {
	if (l >= r) return;
	int i = l - 1, j = r + 1, x = q[l + r >> 1];
	while (i < j) {
		do i++; while (q[i] > x);
		do j--; while (q[j] < x);
		if (i < j) swap(q[i], q[j]);
	}
	QuickSort2(q, l, j), QuickSort2(q, j + 1, r);
}
void sortArray(vector<double>& parray, int flag) {
	int len = (int)parray.size() - 1;

	if (flag == 1) {
		//�Ӵ�С
		cout << "������Ӵ�С��������";
		QuickSort2(parray, 0, len);
		for (auto i : parray) {
			cout << i << ' ';
		}
		cout << endl;
	}
	else {
		//��С����
		QuickSort1(parray, 0, len);
		cout << "�������С����������:";
		for (auto i : parray) {
			cout << i << ' ';
		}
		cout << endl;
	}
	return;
}
int main() {
	vector<double> vec;
	double x;
	cout << "����������Ҫ���������";
	while (cin >> x) {
		vec.push_back(x);
	}
	sortArray(vec, 1);
	sortArray(vec, 0);
	return 0;
}