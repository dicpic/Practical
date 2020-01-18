
#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a; int b; int c;
	std::cout << "Введите значения двух переменных: " << std::endl;
	std::cin >> a >> b;
	c = a;
	a = b;
	b = c;
	std::cout << "Обмен с помощью дополнительной переменной: " << a << " и "<< b<< std::endl;
	std::swap(a, b);
	std::cout << "Обмен без помощи дополнительной переменной: " << a << " и " << b << std::endl;
	_getch();
}

