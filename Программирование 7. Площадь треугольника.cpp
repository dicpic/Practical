// Программирование 7. Площадь треугольника.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
    std::cout << "Введите вариант первичных данных (1 - стороны треугольника; 2 - координаты вершин треугольника): " << std::endl; 
	{
		int v;
		std::cin >> v;
		if (v == 1)
		{
			std::cout << "Введите стороны треугольника: " << std::endl;
			double a;
			double b;
			double c;
			std::cin >> a >> b >> c;
			if (a + b < c) std::cout << "Ошибка: треугольник невозможно построить" << std::endl;
			else if (c + a < b) std::cout << "Ошибка: треугольник невозможно построить" << std::endl;
			else if (b + c < a) std::cout << "Ошибка: треугольник невозможно построить" << std::endl;
			else if (std::cin.fail()) std::cout << "Ошибка: неверные данные" << std::endl;
			else 
			{
				double S = sqrt((a + b + c)*0.5*((a + b + c)*0.5 - a)*((a + b + c)*0.5 - b)*((a + b + c)*0.5 - c));
				std::cout << "S = " << S << std::endl;
			}
		}
		else if (v == 2)
		{
			std::cout << "Введите координаты вершин треугольника: " << std::endl;
			double x[4];
			double y[4];
			for (int i = 1; i <= 3; i++)
			{
				std::cout << "x"<< i << " = " << std::endl;
				std::cin >> x[i];
				if (std::cin.fail()) break;
				std::cout << "y" << i << " = " << std::endl;
				std::cin >> y[i];
				if (std::cin.fail()) break;
			}
			if (std::cin.fail()) std::cout << "Ошибка: неверные данные" << std::endl;
			else
			{
				double S = abs(0.5 * ((x[1] - x[3])*(y[2] - y[3]) - (y[1] - y[3])*(x[2] - x[3])));
				std::cout << "S = " << S << std::endl;
			}
		}
		else std::cout << "Ошибка: неверный вариант" << std::endl;
	}
	_getch();
}