// Программирование 18. Min и Max в одномерном массиве.

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <random>
#include <Windows.h>

/*static unsigned int g_seed;				//вид рандома с сайта Intel, который быстрее rand() в 5.5 раз

inline void fast_srand(int seed)
{
	g_seed = seed;
}
inline int fastrand()
{
	g_seed = (214013 * g_seed + 2531011);
	return (g_seed >> 16) & 0x7FFF;
}*/

void minmax(int *n)
{
	int min, max;
	min = n[0];
	max = n[0];
	for (int i = 0; i < 20; i++)
	{
		if (n[i] < min)
			min = n[i];
		if (n[i] > max)
			max = n[i];
	}
	std::cout << std::endl;
	std::cout << "min = " << min << "; max = " << max;
}

int main()
{
	std::random_device rand;									
	std::mt19937 gen(rand());
	std::uniform_int_distribution<int> distribution(-100, 100);
	setlocale(LC_ALL, "Russian");
	int n[20];
    std::cout << "Генерирую числа";
	for (int i = 0; i < 20; i++)
	{
		n[i] = distribution(gen);
		//std::cout << "n[" << i+1 << "] = " << n[i] << std::endl;
		//Sleep(200);
		std::cout << ".";
	}
	for (0; 1; ) {
		std::cout << "\nприффки";
	}
	minmax(n);
	_getch();
}
