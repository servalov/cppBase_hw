#include "../header_files/Triangle.h"

	// Конструктор с параметрами
	Triangle::Triangle(double set_a, double set_b, double set_c, double set_A, double set_B, double set_C) : a{ set_a }, b{ set_b }, c{ set_c }, A{ set_A }, B{ set_B }, C{ set_C }
	{
		sides_count = 3;
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
		std::cout << "----------------------------------------\n";
		std::cout << name << std::endl;
		std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
	}
