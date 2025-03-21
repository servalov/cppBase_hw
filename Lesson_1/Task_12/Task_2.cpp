// Структуры  и перечисления. Задача 2. Счета
#include <iostream>
#include <windows.h>

// Структура банковский счет
struct Account
{
	int number{};           // номер счета
	std::string name{};     // имя владельца
	double balance{};       // количество денег на счете
};

void change_Balance(Account& a, double sum);        // функция для изменения баланса

int main()
{
	setlocale(LC_ALL,"Russian");
	SetConsoleCP(1251);
	Account p_account;
	double new_balance{};
	std::cout << "Введите номер счета: ";
	std::cin >> p_account.number;
	std::cout << "Введите имя владельца: ";
	std::cin >> p_account.name;
	std::cout << "Введите баланс: ";
	std::cin >> p_account.balance;
	std::cout << "Введите новый баланс: ";
	std::cin >> new_balance;
	change_Balance(p_account, new_balance);
	std::cout << "Ваш счет: " << p_account.name << ", " << p_account.number << ", " << p_account.balance << std::endl;
		
	return EXIT_SUCCESS;
}

// Функция для изменения баланса
void change_Balance(Account& a, double sum)
{
	a.balance = sum;
}