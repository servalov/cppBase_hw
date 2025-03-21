#include <iostream>
enum class Months
{
	January=1, February, March, April, May, June, July, August, September, October, November, December
};
void printMonth(Months& month);

int main()
{
	setlocale(LC_ALL, "Russian");
	int m{};
	Months month{};
	do
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> m;
		month = static_cast<Months>(m);
		if (m!=0) printMonth(month);
	} 
	while (m != 0);
	std::cout << "До свидания" << std::endl;

	return EXIT_SUCCESS;
}

// Функция вывода названия месяца
void printMonth(Months& month)
{
	switch (month)
	{
		case Months::January:
			std::cout << "Январь" << std::endl;
			break;
		case Months::February:
			std::cout << "Февраль" << std::endl;
			break;
		case Months::March:
			std::cout << "Март" << std::endl;
			break;
		case Months::April:
			std::cout << "Апрель" << std::endl;
			break;
		case Months::May:
			std::cout << "Май" << std::endl;
			break;
		case Months::June:
			std::cout << "Июнь" << std::endl;
			break;
		case Months::July:
			std::cout << "Июль" << std::endl;
			break;
		case Months::August:
			std::cout << "Август" << std::endl;
			break;
		case Months::September:
			std::cout << "Сентябрь" << std::endl;
			break;
		case Months::October:
			std::cout << "Октябрь" << std::endl;
			break;
		case Months::November:
			std::cout << "Ноябрь" << std::endl;
			break;
		case Months::December:
			std::cout << "Декабрь" << std::endl;
			break;
		default:
			std::cout << "Неправильный месяц!" << std::endl;
	}
}