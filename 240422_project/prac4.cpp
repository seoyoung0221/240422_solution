//240422
// ctrl + c + K : 전체 주석, ctrl + k + u : 전체주석해제
#include <iostream>

int main()
{
	
	std::cout << "첫 번째 변수를 입력하세요.";
	float x;
	std::cin >> x;

	std::cout << "원하는 연산자를 고르세요. + : 0, - : 1, * : 2, / :3 \n";
	int opr;
	std::cin >> opr;

	std::cout << "두 번째 변수를 입력하세요.";
	float y;
	std::cin >> y;

	switch (opr) {
		case 0 :
			std::cout << x + y;
			break;
		case 1 :
			std::cout << x - y;
			break;
		case 2:
			std::cout << x * y;
			break;
		case 3:
			std::cout << x / y;
			break;
	}
	



}