#include <iostream>

bool isPrimeNumber(int x) {
	
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	int x;
	std::cout << "请输入待检验的数 ： ";
	std::cin >> x;
	std::cout << (isPrimeNumber(x) == true ? "Yes该数是素数" : "No该数不是素数") << std::endl;
	system("pause");
	return 0;
}