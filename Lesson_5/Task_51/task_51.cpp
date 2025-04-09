#include <windows.h>
#include "Algorithms.h"

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	
	double num1{}, num2{};
	int num_oper{};
	std::cout<<" Введите первое число : ";
	std::cin>> num1;
	std::cout << " Введите второе число : ";
	std::cin >> num2;
	do
	{
		std::cout << " Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
		std::cin >> num_oper;
	} while ((num_oper != 1)&&(num_oper != 2) && (num_oper != 3) && (num_oper != 4) && (num_oper != 5));

	std::cout << " Результат:" << std::endl;
	switch (num_oper)
	{
	case 1:
		std::cout << " Сумма двух чисел равна: " << sum(num1, num2) << std::endl;
		break;
	case 2:
		std::cout << " Разность двух чисел равна: " << subtraction(num1, num2) << std::endl;
		break;
	case 3:
		std::cout << " Умножение двух чисел равно: " << multiplication(num1, num2) << std::endl;
		break;
	case 4:
		std::cout << " Деление первого числа на второе: " << division(num1, num2) << std::endl;
		break;
	case 5:
		std::cout <<" "<<num1 << " в степени " << num2 << " равно: " << exponentiation(num1, num2) << std::endl;
		break;
	default:
		break;
	}
	return EXIT_SUCCESS;
}
