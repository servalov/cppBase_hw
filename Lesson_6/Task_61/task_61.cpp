// Препроцессор и макросы. Задание 1. Препроцессорные директивы
#include <iostream>
#include <windows.h>

#define MODE 1

// Проверка определена ли константа MODE
#ifndef MODE
#error Необходимо определить MODE !!!
#elif MODE==1
	// Функция для сложения двух чисел
	double add(double a, double b)
	{
	return a + b;
	}
#endif

double add(double a, double b);   // Функция для сложения двух чисел

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	
	#if MODE==0
		std::cout << "Работаю в режиме тренировки" << std::endl;
	#elif MODE==1
		std::cout << "Работаю в боевом режиме" << std::endl;
		double a{}, b{};
		std::cout << "Введите число 1: ";
		std::cin >> a;
		std::cout << "Введите число 2: ";
		std::cin >> b;
		std::cout << "Результат сложения: " << add(a, b) << std::endl;
	#else
		std::cout << "Неизвестный режим. Завершение работы." << std::endl;
	#endif
	
	return EXIT_SUCCESS;
}
