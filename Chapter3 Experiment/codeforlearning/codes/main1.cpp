#include<iostream>
#include<math.h>
using namespace std;



class Triangle{
private:
	double L1;
	double L2;
	double L3;

public:
	void init(double L1, double L2, double L3) {
		this->L1 = L1;
		this->L2 = L2;
		this->L3 = L3;
	}
	void reset(double L1, double L2, double L3) {
		this->L1 = L1;
		this->L2 = L2;
		this->L3 = L3;
	}
	double length() {
		return L1 + L2 + L3;
	}
	double area() {
		double p = 0.5 * length();
		return sqrt(p * (p - L3) * (p - L2) * (p - L1));
	}
	void shapeTypes(); //类内声明类外定义
};

void Triangle::shapeTypes() {
	double mx = max(max(L1, L2), L3);
	if (mx == L1) {
		
	}
	else if (mx == L2) {
		
	}
}

int main() {
	Triangle demo1;
	demo1.init(1.2, 2.4, 7);
	

	return 0;
}