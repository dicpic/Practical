// Программирование 17. 
//

#include "pch.h"
#include <iostream>
#include <conio.h>

void printBMI(double BMI)
{
	if (BMI >= 18.5)
		if (BMI >= 25.0)
			if (BMI >= 30.0)
				std::cout << "Obesity";
			else
				std::cout << "Overweight";
		else
			std::cout << "Normal weight";
	else
		std::cout << "Underweight";
	//std::cout << " - BMI = " << BMI;
}

double BMI(double weight, double height)
{
	height /= 100; //перевод в метры;
	double BMI = weight / (height*height);
	printBMI(BMI);
	return 0;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	double height, weight;
    std::cout << "Укажите рост (см) и вес (кг): "<<std::endl;
	std::cin >> height >> weight;
	if (std::cin.fail())
		std::cout << "Неверные данные";
	else
	{
		BMI(weight, height);
	}
	_getch();
}

