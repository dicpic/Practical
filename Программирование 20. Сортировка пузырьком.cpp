// Программирование 20. Сортировка пузырьком.
#include "pch.h"
#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n[100], N;
	std::cout << "Количество элементов: ";
	std::cin >> N;
	std::cout << std::endl;
	std::cout << "Элементы: ";
	for (int i = 0; i < N; i++)
			std::cin >> n[i];
	for (int k = 1; k < N; k++) // количество проверок пузырьком равное количеству элементов в массиве
		for (int i = 0; i < N - k; i++) // проходимся пузырьком до предпоследнего
			if (n[i] > n[i + 1]) // если элемент больше следующего, то нужно их переставить
				std::swap(n[i], n[i+1]);
	std::cout << std::endl;
	for (int i = 0; i < N; i++)
		std::cout << n[i] << " ";
	_getch();
}
