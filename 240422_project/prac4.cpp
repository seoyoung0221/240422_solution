#include <iostream>

int main()
{
	std::cout << "ù ��° ������ �Է��ϼ���.";
	int x;
	std::cin >> x;

	std::cout << "���ϴ� �����ڸ� ������. + : 0, - : 1, * : 2, / :3 \n";
	int opr;
	std::cin >> opr;

	std::cout << "�� ��° ������ �Է��ϼ���.";
	int y;
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