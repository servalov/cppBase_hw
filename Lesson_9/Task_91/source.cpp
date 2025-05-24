// Занятие 9. CMake. Задание 1. Простейший проект
#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string str;
	std::cout << "Введите имя: ";
	std::getline(std::cin >> std::ws, str);
	std::cout << "Здравствуйте, " << str << std::endl;
	return EXIT_SUCCESS;
}