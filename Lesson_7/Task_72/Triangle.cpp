#include "Triangle.h"

// Конструктор с параметрами
Triangle::Triangle(int set_sides_count, double set_a, double set_b, double set_c, double set_A, double set_B, double set_C) : Figure(set_sides_count), a { set_a }, b{ set_b }, c{ set_c }, A{ set_A }, B{ set_B }, C{ set_C }
	{
	if (sides_count != 3) throw FigureException("Ошибка создания фигуры. Причина: количество сторон не соответствует трем");
	if (abs(A + B + C - 180) > eps) throw FigureException("Ошибка создания фигуры. Причина: сумма углов не равно 180");
	
		name = "Треугольник";
	}

	// Методы доступа
	double Triangle::get_a()
	{
		return a;
	}
	double Triangle::get_b()
	{
		return b;
	}
	double Triangle::get_c()
	{
		return c;
	}
	double Triangle::get_A()
	{
		return A;
	}
	double Triangle::get_B()
	{
		return B;
	}
	double Triangle::get_C()
	{
		return C;
	}

	// Переопределенный метод для вывода данных о треугольнике
	void Triangle::printData()
	{
		std::cout << name << " создан "<<std::endl;
		std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << "----------------------------------------\n";
	}
