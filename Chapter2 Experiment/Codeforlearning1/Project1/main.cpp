#include<iostream>
using namespace std;
// ctrl + k + f(format) ��ʽ��
// ctrl ��� Ctrl + -
// �����ͻ fn + f10
// �ϵ�f10 10��Ҫ��ȥ������ۻ�һ���������
// f11 ����䣬����������ڲ�
int global = 100;

void func(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
// 8 ����> CPU�Ĵ������β���������CPU�ϣ���ʮKB�����ڴ涼ֱ�ӿ��԰γ���������> c
//��������ת��������һ��
int& add(int a, int b)
{
	global = a + b;
	return global; // �����ܱ��ʽ
}



int main() {
	int a = 3;
	int &b = a; // b��a�ı�����������Ϊ��ֵ����ֵ
	int c = b;
	//cout << *&a << endl;
	func(a, b);
	int d = add(a, b);
	//add��a��b���Ǹ�int&���ͣ���global�ĸ��ư�
	cout << "global address " <<  & global << endl;
	cout << "���õ�ַ��" << & add(a, b) << endl;
	cout << add(a, b) << endl;
	return 0;
}