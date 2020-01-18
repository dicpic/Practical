// Программирование 21. Найди ячейку в двум. массиве.

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <random>

const int A = 10, B = 10;

int main()
{
	std::random_device rand;
	std::mt19937 gen(rand());
	std::uniform_int_distribution<int> distributionx(0, A);
	std::uniform_int_distribution<int> distributiony(0, B);
	setlocale(LC_ALL, "Russian");
	int otvet = 1;
	while (otvet == 1)
	{
		std::cout << "Так, а ну быстро угадал ячейку, а не то... " << std::endl;
		{
			std::cout << "Т";
			Sleep(500);
			std::cout << "а";
			Sleep(500);
			std::cout << "а";
			Sleep(500);
			std::cout << "а";
			Sleep(500);
			std::cout << "а";
			Sleep(500);
			std::cout << "к";
		}
		int num[A][B]{ 0 };
		int x = distributionx(gen);
		int y = distributiony(gen);
		//std::cout << "x: " << x << "\ny: " << y;
		num[x][y] = 1;
		num[A][2] = 0; //Почему так? Не знаю
		std::cout << "\nЯ придумал наказание, а теперь угадывай ячейку и шустрее! ";
		//for (int ix = 0; ix < A+1; ix++)
		//	for (int iy = 0; iy < B+1; iy++)
		//		if (num[ix][iy] == 1)
		//			std::cout << "num[" << ix << "][" << iy << "]\n";
		int yx, yy;
		for (int i = 1; i < 7; i++) // цикл "угадывания"
		{
			if (i < 6) //пока не пройдет 5 попыток компьютер продолжит рассматривать числа (или пока не угадает пользователь)
			{
				std::cin >> yx >> yy;
				if (yx > A || yy > B || yx < 0 || yy < 0) std::cout << "Не попал :з " << std::endl;
				else if (num[yx][yy] == 0) std::cout << "Неа :) " << std::endl;
				else if (num[yx][yy] == 1)
				{
					std::cout << "Угадал! :D " << std::endl;
					break;
				}
			}
			else std::cout << "Вот и всё! Моими координатами были: \nx:" << x << "\ny:" << y << std::endl; // но если идет 6 шаг - компьютер завершает рассмотрение
		}
		std::cout << "Хочешь попытаться еще? ;) (1 - да; 2 - нет)" << std::endl;
		std::cin >> otvet; //ввод ответа для конца или продолжения главного цикла
	}
	//_getch();
}
