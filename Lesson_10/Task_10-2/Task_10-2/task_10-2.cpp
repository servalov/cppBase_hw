#include <iostream>
#include <windows.h>
#include "LeaverDynamicLib.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	std::string str1{};
	std::cout << "¬ведите им€: ";
	std::getline(std::cin >> std::ws, str1);
	User::Leaver lv{str1};
	std::cout << lv.leave();
	
	return EXIT_SUCCESS;
}