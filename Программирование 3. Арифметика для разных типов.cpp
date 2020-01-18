#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	{
	double x;
	double y;
	std::cout << "Введите две переменные дробного типа ";
	std::cin >> x >> y;

	std::cout << "Сумма переменных: " << x + y << std::endl;
	std::cout << "Разность переменных: " << x - y << std::endl;
	std::cout << "Произведение переменных: " << x * y << std::endl;
	if (y == 0) std::cout << "Частное переменных: Невозможно" << std::endl;
	else std::cout << "Частное переменных: " << x / y << std::endl;
	}

	{
		int x;
		double y;
		std::cout << "Введите две переменные целого и дробного типа ";
		std::cin >> x;
		std::cin >> y;

		std::cout << "Сумма переменных: " << x + y << std::endl;
		std::cout << "Разность переменных: " << x << "-" << y << "=" <<x - y << std::endl;
		std::cout << "Произведение переменных: " << x * y << std::endl;
		if (y == 0) std::cout << "Частное переменных: Невозможно" << std::endl;
		else std::cout << "Частное переменных: " << x / y << std::endl;
	}

	{
		int x;
		int y;
		std::cout << "Введите две переменные целого типа ";
		std::cin >> x >> y;

		std::cout << "Сумма переменных: " << x + y << std::endl;
		std::cout << "Разность переменных: " << x - y << std::endl;
		std::cout << "Произведение переменных: " << x * y << std::endl;
		if (y == 0) std::cout << "Частное переменных: Невозможно" << std::endl;
		else std::cout << "Частное переменных: " << x / y << std::endl;
	}
	_getch();
}