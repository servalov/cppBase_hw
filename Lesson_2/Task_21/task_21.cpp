// 2. Классы и объекты. Задача 1. Калькулятор двух чисел
#include <iostream>

// Класс Калькулятор
class Calculator
{
	private:
		double num1{}, num2{};

	public:
		
		// Метод для сложения двух чисел num1 из num2
		double add()
		{
			return num1 + num2;
		}
		// Метод для умножения двух чисел num1 из num2
		double multiply()
		{
			return num1*num2;
		}
		// Метод для вычитания num2 из num1
		double substract_1_2()
		{
			return num1-num2;
		}
		// Метод для вычитания num1 из num2
		double substract_2_1()
		{
			return num2 - num1;
		}
		// Метод для деления num1 на num2
		double divide_1_2()
		{
			return num1/num2;
		}
		// Метод для деления num2 на num1
		double divide_2_1()
		{
			return num2 / num1;
		}
		// Метод для переопределения num1
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
		// Метод для переопределения num2
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

// Главная функция
int main()
{	
	setlocale(LC_ALL,"Russian");
	bool vvod{ false };
	double a{}, b{};
	Calculator calc;          // Создание экземпляра класса Calculator

	do
	{
		do  // Цикл на ввод первого числа
		{
			std::cout << "Введите число num1: ";
			std::cin >> a;
			vvod = calc.set_num1(a);
			if (vvod == false) std::cout << "Неправильный ввод!" << std::endl;

		} while (!vvod);
		do  // Цикл на ввод второго числа
		{
			std::cout << "Введите число num2: ";
			std::cin >> b;
			vvod = calc.set_num2(b);
			if (vvod == false) std::cout << "Неправильный ввод!" << std::endl;

		} while (!vvod);

		std::cout << "Результаты вычислений:" << std::endl;
		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 - num2 = " << calc.substract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calc.substract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calc.divide_2_1() <<'\n'<< std::endl;
	} while (true);
		
	return EXIT_SUCCESS;
}