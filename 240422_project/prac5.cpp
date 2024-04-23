#include <iostream>

int main() 
{
	int num;
	std::cout << "숫자를 입력하세요.";
	std::cin >> num;

	num % 5 == 0 ? std::cout << num << "은 5의 배수입니다. " : std::cout << num << "은 5의 배수가 아닙니다. ";
	return 0;
}
