// Программирование 16. Факторизация : для факторизации числа существует несколько различных алгоритмов. В данном случае будет
// использоваться метод факторизации Ферма - эффективен для небольших чисел и для чисел фида n = qp, где q и p - простые числа с
// небольшой разницей.

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <math.h>
#include <vector>

const int E = 10000;
int fact[20], N = 0;

bool issqr(int x)
{
	for (int i = 1; x > 0; x -= i, i += 2);
	return !x;
}

void factorization(int n)
{
	int a, b, i = 0;
	while (n % 2 == 0)
	{
		n /= 2;
		i += 1;
	}
	for (int j = 0; j < i; j++)
	{
		fact[N] = 2;
		N += 1;
	}
	double x = ceil(sqrt(n));
	for (int k = 0; k < E; k++)
	{
		{
			if (issqr((ceil(sqrt(n)) + k)*(ceil(sqrt(n)) + k) - n))
			{
				x = ceil(sqrt(n)) + k;
				double y = sqrt(x * x - n);
				a = x - y;
				b = x + y;
				if (a != 1 && b != 1)
				{
					factorization(a);
					factorization(b);
				}
				else {
					if (a != 1)
					{
						fact[N] = a;
						N += 1;
					}
					if (b != 1)
					{
						fact[N] = b;
						N += 1;
					}
				}
				break;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
    std::cout << "Введите числo: ";
	int n;
	std::cin >> n;
	factorization(n);
	/*std::cout << "Введите количество чисел: ";
	int n[100];
	int N;
	std::cin >> N;
	std::cout << "Введите числa: " << std::endl;
	for (int i = 0; i < N; i++)
	{
		//n[i] = i+1;
		//std::cin >> n[i];
		std::cout << i+1 << ": ";
		factorization(n[i]);
		std::cout << std::endl;
	}*/
	int p;
	//std::cout << fact[0];
	//for (int i = 1; i < N; i++)
	//	std::cout << "*" << fact[i];
	//std::cout << std::endl;
	for (int i = 0; i < N; i++)
	{
		p = 1;
		std::cout << fact[i];
		for (int j = 0; j < N; j++)
			if (fact[i] == fact[j] && i!=j)
			{
				p += 1;
				for (int k = j; k < N-1; k++)
					fact[j] = fact[k + 1];
				N -= 1;
				j = 0;
			}
		if (p != 1)
			std::cout << "^" << p;
		if (i != N - 1)
			std::cout << "*";
		//std::cout << std::endl;
		//for (int f = 0; f < N; f++)
		//	std::cout << " FIFA " << fact[f];
		//std::cout << std::endl;
	}
	_getch();
}
