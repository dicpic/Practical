// Программирование 2. Переменные int и double.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int ix = 3; int iy = 3.14;
	double dx = 3; double dy = 3.14;
    std::cout << "Две переменные типа int - "<< ix << " и " << iy<<" <--- убрал дробную часть из-за целочисленного типа"<<std::endl;
	std::cout << "Две переменные типа double - " << dx << " и " << dy;
	_getch();
}
