// Программирование 1.Простой вывод.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 2 + 2 * 2;
	std::cout << "Результат вычисления выражения 2+2*2="<< n;
	_getch();
}
