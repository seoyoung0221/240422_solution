#include <iostream>

int main()
{
	std::cout << "���̸� �Է��ϼ���.";
	int old;
	std::cin >> old;


	if (old <= 7)
	{
		std::cout << "����";
	} else if (old <= 13)
	{
		std::cout << "�ʵ��л�";
	} else if (old <= 16)
	{
		std::cout << "���л�";
	} else if (old <= 19)
	{
		std::cout << "����л�";
	} else if (old >= 20)
	{
		std::cout << "����";
	} else if (old >= 200)
	{
		std::cout << "���̰� �ʹ� �����ϴ�.";
	}
}