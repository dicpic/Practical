#include "pch.h"
#include <iostream>
#include <conio.h>
#include <Windows.h> 
//#include <cstring>

size_t strlen(const char * string)
{
	size_t size;
	for (size = 0; string[size]; size++);
	return size;
}

int strcmp(const char * string1, const char * string2)
{
	return (strlen(string1) - strlen(string2));
}

char * mystrstr(char * string1, const char * string2)
{
	bool flag = 1;
	int i;
	//std::cout << "\nСравнение: " << std::endl;
	for (i = 0; flag && i <strlen(string1); ++i)
	{
		//std::cout << "\n" << i << ": " << string2[0] << " != " << string1[i] << std::endl;
		if (string1[i] == string2[0])
		{
			flag = 0;
			for (int j = 1; j < strlen(string2); j++)
			{
			//std::cout <<"\n " << i+j << ": " << string2[j] << " != " << string1[i+j] << std::endl;
				if (string2[j] != string1[i + j])
				{
					flag = 1;
					break;
				}
			}
		}
	}
	//std::cout << flag;

	if (flag) return 0;
	i--;

	//std::cout << "\nТочка встречи: " << i;

	for (int j = 0; j < strlen(string1); j++)
		string1[j] = string1[i+j];
	return string1;
}

char * mystrcat(char * destptr, const char * srcptr)
{
	for (int i = strlen(destptr), j = 0; i < strlen(destptr) + strlen(srcptr); i++, j++)
		destptr[i] = srcptr[j];

	return destptr;
}

int main()
{
	char string1[50], string2[50];
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cin.getline(string1, 50);
	std::cin.getline(string2, 50);

#pragma region -----Задания-----

	//1
	std::cout << "\nДлина 1 = " << strlen(string1);
	std::cout << "\nДлина 2 = " << strlen(string2);

	//2
	std::cout << "\nДлина 1 - Длина 2 = " << strcmp(string1, string2);

	//3
	if (mystrstr(string1, string2))
		std::cout << "\nОбщее: " << mystrstr(string1, string2);
	else
		std::cout << "\nОбщее: -1";

	//4
	if (strlen(string1) + strlen(string2) > 50)
		std::cout << "\nБуфер слишком мал для объединения!";
	else 
		std::cout << "\nОбъединение: " << mystrcat(string1, string2);

#pragma endregion

	_getch();
}
