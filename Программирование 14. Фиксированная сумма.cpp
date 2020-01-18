#include "pch.h"
#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
    std::cout << "Введите 5 целых чисел: ";
	long long int s, r1, r2, l1, l2;
	std::cin >> s >> l1 >> r1 >> l2 >> r2;
	if (l1 > r1 || l2 > r2 || std::cin.fail()) std::cout << "Данные введены неверно.";
	else
		if ((s-l1 < l2) || (s-r1 > r2))
			std::cout << "-1";
		else 
			for (int i = l1; i<=r1; i++)
				if (s - i <= r2)
				{
					std::cout << i << " " << s - i;
					_getch();
					return 0;
				}

	_getch();
}
