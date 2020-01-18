// Программирование 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

int main()
{	
	double a, b, c;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите a, b, c: "<< std::endl;
	std::cin >> a >> b >> c;
	if (std::cin.fail())
	{
		std::cout << "Ошибка: неверно введены данные";
	}
	else if (a != 0)
	{
		std::cout << "Уравнение (" << a << ")x^2 + (" << b << ")x + (" << c << ") = 0 имеет корни: " << std::endl;
		double D = b * b - 4 * a*c;
		//std::cout << "D = " << D << std::endl;
		if (D < 0) std::cout << "Нет вещественных корней";
		else
			if (D >= 0)
			{
				double x1 = (-b - sqrt(D)) / (2 * a);
				double x2 = (-b + sqrt(D)) / (2 * a);
				if (x1 == x2) std::cout << "x = " << x1 << std::endl;
				else
				{
					std::cout << "x1 = " << x1 << std::endl;
					std::cout << "x2 = " << x2 << std::endl;
				}
			}
	}
	else if (b != 0)
	{
		std::cout << "Уравнение (" << b << ")x + (" << c << ") = 0 имеет корни: " << std::endl;
		double x = (-c) / b;
		std::cout << "x = " << x << std::endl;
	}
	else
	{
		if (c != 0) std::cout << "Уравнение (" << c << ") = 0 не имеет решений" << std::endl;
		else std::cout << "Уравнение (" << c << ") = 0 имеет любые решения" << std::endl;
	}
    _getch(); 
}