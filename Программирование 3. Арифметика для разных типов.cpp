#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	{
	double x;
	double y;
	std::cout << "������� ��� ���������� �������� ���� ";
	std::cin >> x >> y;

	std::cout << "����� ����������: " << x + y << std::endl;
	std::cout << "�������� ����������: " << x - y << std::endl;
	std::cout << "������������ ����������: " << x * y << std::endl;
	if (y == 0) std::cout << "������� ����������: ����������" << std::endl;
	else std::cout << "������� ����������: " << x / y << std::endl;
	}

	{
		int x;
		double y;
		std::cout << "������� ��� ���������� ������ � �������� ���� ";
		std::cin >> x;
		std::cin >> y;

		std::cout << "����� ����������: " << x + y << std::endl;
		std::cout << "�������� ����������: " << x << "-" << y << "=" <<x - y << std::endl;
		std::cout << "������������ ����������: " << x * y << std::endl;
		if (y == 0) std::cout << "������� ����������: ����������" << std::endl;
		else std::cout << "������� ����������: " << x / y << std::endl;
	}

	{
		int x;
		int y;
		std::cout << "������� ��� ���������� ������ ���� ";
		std::cin >> x >> y;

		std::cout << "����� ����������: " << x + y << std::endl;
		std::cout << "�������� ����������: " << x - y << std::endl;
		std::cout << "������������ ����������: " << x * y << std::endl;
		if (y == 0) std::cout << "������� ����������: ����������" << std::endl;
		else std::cout << "������� ����������: " << x / y << std::endl;
	}
	_getch();
}