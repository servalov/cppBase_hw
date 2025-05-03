// Занятие 8. Перегрузка операторов. Задача 2. Остальные операции с дробями.
#include <iostream>
#include <windows.h>
#include <string>

// Класс для работы с дробями.
class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int set_numerator, int set_denominator) : numerator_{ set_numerator }, denominator_{ set_denominator }
	{
	}

	// Перегрузка оператора cложения
	Fraction operator+(Fraction fr)
	{
		int a{ numerator_ * fr.denominator_ + denominator_ * fr.numerator_ };
		int b{ denominator_ * fr.denominator_ };
		int c{ nod(a,b) };
		return Fraction(a/c,b/c);
	}

	// Перегрузка оператора вычитания
	Fraction operator-(Fraction fr)
	{
		int a{ numerator_ * fr.denominator_ - denominator_ * fr.numerator_ };
		int b{ denominator_ * fr.denominator_ };
		int c{ nod(a,b) };
		return Fraction(a / c, b / c);
	}

	// Перегрузка оператора уможения
	Fraction operator*(Fraction fr)
	{
		int a{ numerator_ * fr.numerator_ };
		int b{ denominator_ * fr.denominator_ };
		int c{ nod(a,b) };
		return Fraction(a / c, b / c);
	}
	
	// Перегрузка оператора деления
	Fraction operator/(Fraction fr)
	{
		int a{ numerator_ * fr.denominator_ };
		int b{ denominator_ * fr.numerator_ };
		int c{ nod(a,b) };
		return Fraction(a / c, b / c);
	}

	// Перегрузка оператора унарный минус
	Fraction operator-()
	{
		return { -numerator_, denominator_ };
	}

	// Перегрузка оператора инкремента (префиксная форма)
	Fraction& operator++()
	{
		numerator_+= denominator_;
		return *this;
	}

	// Перегрузка оператора декремента (префиксная форма)
	Fraction& operator--()
	{
		numerator_ -= denominator_;
		return *this;
	}

	// Перегрузка оператора инкремента (постфиксная форма)
	Fraction operator++(int)
	{
		Fraction temporary{ *this };
		++(*this);
		return temporary;
	}

	// Перегрузка оператора декремента (постфиксная форма)
	Fraction operator--(int)
	{
		Fraction temporary{ *this };
		--(*this);
		return temporary;
	}

	// Метод для нахождения НОД двух чисел
	int nod(int a, int b)
	{
		while (a != 0 && b != 0)
		{
			if (a > b)
			{
				a %= b;
			}
			else
			{
				b %= a;
			}
		}
		return abs(a + b);
	}
	
	// Метод для записи дроби в строку
	std::string str()
	{
		std::string str_fr;
		return str_fr=std::to_string(numerator_)+"/"+std::to_string(denominator_);
	}
};

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int num_{}, den_{};
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> num_;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> den_;
	Fraction fr1{ num_,den_ };
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> num_;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> den_;
	Fraction fr2{ num_,den_ };

	std::cout << "\nПервая дробь: " << fr1.str() << std::endl;;
	std::cout << "Вторая дробЬ: " << fr2.str() << std::endl;;
	std::cout << "Обратное значение первой дроби: " << (-fr1).str() << std::endl;;
	std::cout << "Обратное значение второй дроби: " << (-fr2).str() << std::endl;;
	std::cout << "Результаты арифметических операций над дробями: " << std::endl;
	Fraction fr3 = fr1 + fr2;
	std::cout << fr1.str() << " + " << fr2.str() << " = " << fr3.str()<<std::endl;
	fr3 = fr1 - fr2;
	std::cout << fr1.str() << " - " << fr2.str() << " = " << fr3.str()<<std::endl;
	fr3 = fr1 * fr2;
	std::cout << fr1.str() << " * " << fr2.str() << " = " << fr3.str() << std::endl;
	fr3 = fr1 / fr2;
	std::cout << fr1.str() << " / " << fr2.str() << " = " << fr3.str() << std::endl;
	
	std::cout<<"\nОперации инкремента и декремента с дробью:" << std::endl;
	std::cout << "++" << fr1.str() << " * " << fr2.str() << " = ";
	fr3 = ++fr1 * fr2;
	std::cout << fr3.str() << std::endl;
	std::cout<<"Первая дробь: " << fr1.str() << std::endl;

	std::cout << fr1.str() <<"--"<< " * " << fr2.str() << " = ";
	fr3 = fr1-- * fr2;
	std::cout << fr3.str() << std::endl;
	std::cout << "Первая дробь: " << fr1.str() << std::endl;;

	std::cout << "\nВывод значения первой дроби с постфиксным инкрементом: " << fr1++.str() << std::endl;
	std::cout << "Вывод значение первой дроби после инкремента: " << fr1.str() << std::endl;

	return EXIT_SUCCESS;
}