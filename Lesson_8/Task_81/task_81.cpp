// Занятие 8. Перегрузка операторов. Задача 1. Сравнение в дробях.
#include <iostream>
#include <windows.h>

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

	// Перегрузка оператора ==
	bool operator==(const Fraction& fr)
	{
		return (numerator_ * fr.denominator_ - fr.numerator_ * denominator_ == 0);
	}

	// Перегрузка оператора !=
	bool operator!=(Fraction& fr)
	{
		return !(*this == fr);
	}

	// Перегрузка оператора <
	bool operator<(Fraction& fr)
	{
		return(numerator_ * fr.denominator_ - fr.numerator_ * denominator_ < 0);
	}

	// Перегрузка оператора >
	bool operator>(Fraction& fr)
	{
		return (fr < *this);
	}

	// Перегрузка оператора <=
	bool operator<=(Fraction& fr)
	{
		return !(*this>fr);
	}

	// Перегрузка оператора >=
	bool operator>=(Fraction& fr)
	{
		return !(*this < fr);
	}
};

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	Fraction f1{ 5, 6 };
	Fraction f2{ 7, 10 };

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

	return EXIT_SUCCESS;
}