#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>

bool check(int intword)
{
	if (!((intword > 47 && intword < 58) || (intword > 64 && intword < 91) || (intword > 96 && intword < 123)))
		return 1;
	else
		return 0;
}

bool pal(std::string word)
{
	int size = word.size();
	int left = 0, right = 0;
	for (int i = 0; i < (size - right) / 2; i++)
	{
		if (i + left > size - right)
		{
			std::cout << "а что это такое ";
			_getch();
			return 0;
		}
		else
		{
			if (check(int(word[i + left])))
			{
				left += 1;
				i--;
				continue;
			}
			if (check(int(word[size - (i + 1) - right])))
			{
				right += 1;
				i--;
				continue;
			}
			//std::cout << "\n" << word[i + left] << " <=> " << word[size - (i + 1) - right];
			if (word[i + left] != word[size - (i + 1) - right])
			{
				std::cout << "Не палиндром ";
				_getch();
				return 0;
			}
		}
	}
	std::cout << "Палиндром ";
	_getch();
	return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    std::cout << "Введите слово: ";
	std::string word;
	getline(std::cin, word);
	pal(word);
}