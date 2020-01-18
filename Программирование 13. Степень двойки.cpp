#include "pch.h"
#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Введите число: " << std::endl;
	std::cin >> n;
	if (std::cin.fail())
		std::cout << "Неверные данные";
	else
	{
		int x;
		x = std::log2(n);
		if (x / std::log2(n) == 0) std::cout << "Кол-во степеней двойки, которые меньше данного числа: " << x << std::endl;
		else std::cout << "Кол-во степеней двойки, которые меньше данного числа: " << x+1 << std::endl;
	}
	_getch();
}
