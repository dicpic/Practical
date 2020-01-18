#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double num;
	int pow;
    std::cout << "Введите число:"; 
	std::cin >> num;
	std::cout << "Введите степень:";
	std::cin >> pow;
	if (pow > 0)
	{
		std::cout << num;
		for (int i = 1; i < pow; i++)
			num *= num;
		std::cout << " ^ " << pow << " = " << num;
	}
	else 
		if (pow = 0) std::cout << num << " ^ 0 = 1 ";
		else 
			{
				std::cout << num;
				for (int i = 1; i < pow; i++)
					num *= num;
				std::cout << " ^ " << pow << " = " << 1.0/num;
			}
	_getch();
}
