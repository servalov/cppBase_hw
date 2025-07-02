#include <iostream>
#include <windows.h>
#include "GreeterStaticLib.h"

int main()
{
	setlocale(LC_ALL,"Russian");
	SetConsoleCP(1251);
	std::string str1{};
	std::cout << "¬ведите им€: ";
	std::getline(std::cin >> std::ws, str1);
	User::Greeter gr{str1};
	std::cout << gr.greet();

	return EXIT_SUCCESS;
}