// ���������  � ������������. ������ 2. �����
#include <iostream>
#include <windows.h>

// ��������� ���������� ����
struct Account
{
	int number{};           // ����� �����
	std::string name{};     // ��� ���������
	double balance{};       // ���������� ����� �� �����
};

void change_Balance(Account& a, double sum);        // ������� ��� ��������� �������

int main()
{
	setlocale(LC_ALL,"Russian");
	SetConsoleCP(1251);
	Account p_account;
	double new_balance{};
	std::cout << "������� ����� �����: ";
	std::cin >> p_account.number;
	std::cout << "������� ��� ���������: ";
	std::cin >> p_account.name;
	std::cout << "������� ������: ";
	std::cin >> p_account.balance;
	std::cout << "������� ����� ������: ";
	std::cin >> new_balance;
	change_Balance(p_account, new_balance);
	std::cout << "��� ����: " << p_account.name << ", " << p_account.number << ", " << p_account.balance << std::endl;
		
	return EXIT_SUCCESS;
}

// ������� ��� ��������� �������
void change_Balance(Account& a, double sum)
{
	a.balance = sum;
}