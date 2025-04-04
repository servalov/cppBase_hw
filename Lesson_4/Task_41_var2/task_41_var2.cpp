// ООП. Наследование и полиморфизм. Задание 4. Фигуры. Кооличство сторон (вариант 2 с закрытыми полями)
#include <iostream>
#include <windows.h>

// Базовый класс Фигура
class Figure
{
private:
	int sides_count{};       // количество сторон у фигуры
	std::string name{};      // название фигуры

public:
	// Конструктор c параметрами
	Figure(int setSides, std::string setName) : sides_count{ setSides }, name{ setName }
	{
		//std::cout << " Конструктор Figure!!!" << std::endl;
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

	// Конструктор с параметрами
	Triangle(int setSides, std::string setName) : Figure(setSides, setName)
	{
		//std::cout << " Конструктор Triangle!!!" << std::endl;
	}
};

// Производный класс Четырехугольник
class Quardrangle : public Figure
{
public:

	// Конструктор с параметрами
	Quardrangle(int setSides, std::string setName) : Figure(setSides, setName)
	{
		//std::cout << " Конструктор Quardrangle!!!" << std::endl;
	};
};

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	Figure fq{ 0,"Фигура" };
	std::cout << fq.get_name() << ": " << fq.get_sides_count() << std::endl;
	Triangle tr{ 3,"Треугольник" };
	std::cout << tr.get_name() << ": " << tr.get_sides_count() << std::endl;
	Quardrangle qr{ 4,"Четырехугольник" };
	std::cout << qr.get_name() << ": " << qr.get_sides_count() << std::endl;

	return EXIT_SUCCESS;
}