#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
    std::cout << "Введите начальную координату, начальную скорость и время: "; 
	double x0; double v0; int t;
	std::cin >> x0 >> v0 >> t;
	const double g = -9.8;
	double x = x0 + v0 * t + g * t*t / 2;
	double x1 = 1 / 2;
	std::cout << "Расстояние, которое прошло тело равно: " << x<< " " << x1;
	_getch();
}
