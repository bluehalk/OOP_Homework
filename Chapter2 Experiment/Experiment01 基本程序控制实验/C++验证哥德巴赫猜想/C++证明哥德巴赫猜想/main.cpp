#include <iostream>

bool isPrimeNumber(int x) {

	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
void DecodeEvenToPrime(int x) {
	for (int i = 2; i <= x / 2; i++)
	{
		//std::cout << i << x - i << std::endl;
		if (isPrimeNumber(i) && isPrimeNumber(x - i)) {
			std::cout << "偶数" << x << "的素数分解结果:" << " " << x << " = " << i << " + " << x - i << std::endl;
			std::cout << "偶数" << x << "的素数分解结果:" << " " << x << " = " << x - i << " + " << i << std::endl;
		}
	}
}

int main() {
	int x = -1;
	std::cout << "请输入一个偶数 (N > 6)： ";
	//while (!(cin >> x) || x <= 6 || x % 2 != 0) {
	//	std::cout << "无效输入，请重新输入一个偶数 (N > 6)： ";
	//	std::cin.clear();
	//	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//}
	while (true) {
		if (std::cin >> x) {
			if (x <= 6 || x & 1) {
				std::cout << "无效输入，请重新输入一个偶数 (N > 6)： ";
			}
			else {
				break;
			}
		}
		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	DecodeEvenToPrime(x);
	system("pause");
	return 0;
}