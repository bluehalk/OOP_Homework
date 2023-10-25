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
	std::cout << "�������������� �� ";
	std::cin >> x;
	std::cout << (isPrimeNumber(x) == true ? "Yes����������" : "No������������") << std::endl;
	system("pause");
	return 0;
}