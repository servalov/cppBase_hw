// 2. ������ � �������. ������ 1. ����������� ���� �����
#include <iostream>

// ����� �����������
class Calculator
{
	private:
		double num1{}, num2{};

	public:
		
		// ����� ��� �������� ���� ����� num1 �� num2
		double add()
		{
			return num1 + num2;
		}
		// ����� ��� ��������� ���� ����� num1 �� num2
		double multiply()
		{
			return num1*num2;
		}
		// ����� ��� ��������� num2 �� num1
		double substract_1_2()
		{
			return num1-num2;
		}
		// ����� ��� ��������� num1 �� num2
		double substract_2_1()
		{
			return num2 - num1;
		}
		// ����� ��� ������� num1 �� num2
		double divide_1_2()
		{
			return num1/num2;
		}
		// ����� ��� ������� num2 �� num1
		double divide_2_1()
		{
			return num2 / num1;
		}
		// ����� ��� ��������������� num1
		bool set_num1(double num1)
		{
			if (num1 != 0)
			{
				this->num1 = num1; 
				return true;
			}
			else
			{
				return false;
			}
		}
		// ����� ��� ��������������� num2
		bool set_num2(double num2)
		{
			if (num2 != 0)
			{
				this->num2 = num2; 
				return true;
			}
			else
			{
				return false;
			}
		}
};

// ������� �������
int main()
{	
	setlocale(LC_ALL,"Russian");
	bool vvod{ false };
	double a{}, b{};
	Calculator calc;          // �������� ���������� ������ Calculator

	do
	{
		do  // ���� �� ���� ������� �����
		{
			std::cout << "������� ����� num1: ";
			std::cin >> a;
			vvod = calc.set_num1(a);
			if (vvod == false) std::cout << "������������ ����!" << std::endl;

		} while (!vvod);
		do  // ���� �� ���� ������� �����
		{
			std::cout << "������� ����� num2: ";
			std::cin >> b;
			vvod = calc.set_num2(b);
			if (vvod == false) std::cout << "������������ ����!" << std::endl;

		} while (!vvod);

		std::cout << "���������� ����������:" << std::endl;
		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 - num2 = " << calc.substract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calc.substract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calc.divide_2_1() <<'\n'<< std::endl;
	} while (true);
		
	return EXIT_SUCCESS;
}