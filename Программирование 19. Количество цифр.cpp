// Программирование 19. Количество цифр.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

void counting(int *a, int n)
{
	int count;
	for (int num = 0; num < 10; num++)
	{
		count = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == num)
				count += 1;
		}
		if (count != 0) 
			std::cout << num << ": " << count << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
    std::cout << "Количество цифр: ";
	int a[10], n;
	std::cin >> n;
	std::cout << "Цифры: ";
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	counting(a, n);
	_getch();
}
