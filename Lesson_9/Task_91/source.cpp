// ������� 9. CMake. ������� 1. ���������� ������
#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string str;
	std::cout << "������� ���: ";
	std::getline(std::cin >> std::ws, str);
	std::cout << "������������, " << str << std::endl;
	return EXIT_SUCCESS;
}