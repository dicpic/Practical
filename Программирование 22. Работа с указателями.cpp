#include "pch.h"
#include <iostream>
#include <conio.h>

void swap(int* a, int* b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

int msort(int* a, int* b, int* c)
{
	if (*a > *b)
		if (*a > *c)
			if (*b > *c)
				swap(a, c);
			else
			{
				swap(a, c);
				swap(b, c);
			}
		else
			swap(a, b);
	else
		if (*a > *c)
		{
			swap(a, c);
			swap(b, a);
		}
		else
			if(*c < *b)
				swap(b, c);
	return *c;
}

void info(const int* a)
{
	std::cout <<"АДРЕС: {" << a << "}; ЗНАЧЕНИЕ: {" << *a << "};";
}

int* add(int* a, const int* b)
{
	*a = *a + *b;
	return a;
}

int main()
{
	setlocale(LC_ALL, "Russian");

#pragma region --Задание в номере--

	//1
	int a = 5, b = 0, c = 1;

	//2
	std::cout << "a: ";
	info(&a);
	std::cout << "\nb: ";
	info(&b);
	std::cout << "\nc: ";
	info(&c);

	//3
	msort(&a, &b, &c);
	std::cout << "\nМаксимальное: " << c;

	//4
	add(&a, &b);
	add(&a, &c);
	std::cout << "\nСумма: ";
	info(&a);

#pragma endregion

	//std::cout << "\na-" << a << "\nb-" << b << "\nc-" << c;

	_getch();
}