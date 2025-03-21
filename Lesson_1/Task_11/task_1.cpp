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
		std::cout << "������� ����� ������: ";
		std::cin >> m;
		month = static_cast<Months>(m);
		if (m!=0) printMonth(month);
	} 
	while (m != 0);
	std::cout << "�� ��������" << std::endl;

	return EXIT_SUCCESS;
}

// ������� ������ �������� ������
void printMonth(Months& month)
{
	switch (month)
	{
		case Months::January:
			std::cout << "������" << std::endl;
			break;
		case Months::February:
			std::cout << "�������" << std::endl;
			break;
		case Months::March:
			std::cout << "����" << std::endl;
			break;
		case Months::April:
			std::cout << "������" << std::endl;
			break;
		case Months::May:
			std::cout << "���" << std::endl;
			break;
		case Months::June:
			std::cout << "����" << std::endl;
			break;
		case Months::July:
			std::cout << "����" << std::endl;
			break;
		case Months::August:
			std::cout << "������" << std::endl;
			break;
		case Months::September:
			std::cout << "��������" << std::endl;
			break;
		case Months::October:
			std::cout << "�������" << std::endl;
			break;
		case Months::November:
			std::cout << "������" << std::endl;
			break;
		case Months::December:
			std::cout << "�������" << std::endl;
			break;
		default:
			std::cout << "������������ �����!" << std::endl;
	}
}