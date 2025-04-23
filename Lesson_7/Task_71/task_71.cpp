// Исключение и обработка ошибок. Задание 1. Простое исключение
#include <iostream>
#include <windows.h>

int function(std::string str, int forbidden_length);

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	
	int forbidden_length{};
	int priz{};
	std::string str{};
	std::cout << "Введите запретную длину: ";
	std::cin>> forbidden_length;
	while (priz==0)
	{
		std::cout << "Введите слово: ";
		std::cin >> str;
		try
		{
			std::cout<<"Длина слова "<< str<< " равна "<< function(str, forbidden_length)<<std::endl;
		}
		catch(std::string msg)
		{
			std::cout << "Вы ввели слово запреной длины !!! До свидания!!!" << std::endl;
			priz = 1;
		}
	} 

	std::cout << "Завершение программы. " << std::endl;
	return EXIT_SUCCESS;
}

// Функция возвращает длину переданной строки
int function(std::string str, int forbidden_length)
{
	if (str.length() == forbidden_length) throw std::string{"Bad_length"};
	else return str.length();
}