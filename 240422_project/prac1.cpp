#include <iostream>

int main()
{
	std::cout << "이름을 입력하세요. \n";
	std::string name;
	std::cin >> name;

	std::cout << "나이를 입력하세요. \n";
	int old;
	std::cin >> old;

	std::cout << "안녕하세요!" << name << "님 (" << old << "세)";

	return 0;
}

