#include <iostream>

int main() 
{
	int num;
	std::cout << "���ڸ� �Է��ϼ���.";
	std::cin >> num;

	num % 5 == 0 ? std::cout << num << "�� 5�� ����Դϴ�. " : std::cout << num << "�� 5�� ����� �ƴմϴ�. ";
	return 0;
}
