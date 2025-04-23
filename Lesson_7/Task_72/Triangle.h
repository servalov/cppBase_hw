#pragma once

#include "Figure.h"

// Производный класс Треугольник
class Triangle : public Figure
{
protected:
	double a{}, b{}, c{};  // стороны треугольника
	double A{}, B{}, C{};  // углы треугольника
	//int sides_count{};
public:

	// Конструктор с параметрами
	Triangle(int set_sides_count, double set_a, double set_b, double set_c, double set_A, double set_B, double set_C);

	// Методы доступа
	double get_a();
	double get_b();
	double get_c();
	double get_A();
	double get_B();
	double get_C();

	// Переопределенный метод для вывода данных о треугольнике
	void printData() override;

};
