// ООП. Наследование и полиморфизм. Задание 4. Фигуры. Кооличство сторон
#include <iostream>
#include <windows.h>

// Базовый класс Фигура
class Figure
{
protected:
	int sides_count{};       // количество сторон у фигуры
	std::string name{};      // название фигуры

public:
	
	// Конструктор без параметров
	Figure()
	{
		sides_count = 0;
		name = "Фигура";
	}

	// Метод для доступа информации о количестве сторон
	int get_sides_count()
	{
		return sides_count;
	}

	// Метод для доступа информации о названии фигуры
	std::string get_name()
	{
		return name;
	}
};

// Производный класс Треугольник
class Triangle : public Figure
{
public:
	
	// Конструктор без параметров
	Triangle()
	{
		sides_count = 3;
		name = "Треугольник";
	}
};

// Производный класс Четырехугольник
class Quardrangle : public Figure
{
public:
	
	// Конструктор без параметров
	Quardrangle()
	{
		sides_count = 4;
		name = "Четырехугольник";
	};
};

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	Figure fq;
	Triangle tr;
	Quardrangle qr;
	std::cout << fq.get_name() << ": " << fq.get_sides_count() << std::endl;
	std::cout << tr.get_name() << ": " << tr.get_sides_count() << std::endl;
	std::cout << qr.get_name() << ": " << qr.get_sides_count() << std::endl;

	return EXIT_SUCCESS;
}