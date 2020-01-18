#include "pch.h"
#include <iostream>
#include <conio.h>

#define b 100 // максимальный размер входного массива

int swaping(int l,  int *n, int h) //l - low (нижний предел), h - high (верхний предел), *n - массив
{
	int bar = n[(l+h) / 2]; //как опорный элемент для сравнения берем центральный
	while (l<=h) 
		{
			while (n[l] < bar) // цикл, находящий элемент слева от опорного, который больше его
				l++;
			while (n[h] > bar) // цикл, находящий элемент справа от опорного, который меньше его
				h--;
			if (l >= h)
				break;
			std::swap(n[l], n[h]); //меняются местами два элемента (cлева элемент, 
								   //который больше опорного, и справа, который меньше опорного)
		}
	return l; // на основе этого элемента массив делится на два подмассива (можно поставить и h)
}

int sort(int l, int *n, int h)
{
	int point;
	if (l < h)
	{
		point = swaping(l, n, h); // точкой деления массива является результат функции
		sort(l, n, point); // первый подмассив
		sort(point + 1, n, h); // второй подмассив
	}
	return *n;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int l=0;
	int k;
	int n[b];
	std::cout << "Сколько элементов? " <<std::endl;
	std::cin >> k;
	std::cout << "Выпишите эти элементы: " << std::endl;
	for (int i = 0; i <= k - 1; i++)
		std::cin >> n[i];
	sort(l, n, k - 1);
	std::cout << "5 наименьших: " << std::endl;
		for (int i = 0; i <= k-1; i++)
			switch (i)
			{
				case 4: std::cout << n[4] << " ";
				case 3: std::cout << n[3] << " ";
				case 2: std::cout << n[2] << " ";
				case 1: std::cout << n[1] << " "; 
				case 0: 
				{
					std::cout << n[0] << " " << std::endl;
					break;
				}
				default: std::cout << n[4] << " " << n[3] << " " << n[2] << " " << n[1] << " " << n[0]  << std::endl;

			}
	_getch();
}
;