#include <iostream>

int main()
{
	std::cout << "나이를 입력하세요.";
	int old;
	std::cin >> old;


	if (old <= 7)
	{
		std::cout << "유아";
	} else if (old <= 13)
	{
		std::cout << "초등학생";
	} else if (old <= 16)
	{
		std::cout << "중학생";
	} else if (old <= 19)
	{
		std::cout << "고등학생";
	} else if (old >= 20)
	{
		std::cout << "성인";
	} else if (old >= 200)
	{
		std::cout << "나이가 너무 많습니다.";
	}
}