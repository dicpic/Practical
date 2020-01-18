
#include <iostream>
#include <conio.h>

int main()
{

	setlocale(LC_ALL, "Russian");
	unsigned int n;
    std::cout << "Введите число: "; 
	std::cin >> n;
	for (int i = n - 1; i > 0; i--)
	{
		n *= i; // n= n* i
		std::cout << n << std::endl;
	}
	std::cout << "n!= "<< n << std::endl;
	_getch();
}

