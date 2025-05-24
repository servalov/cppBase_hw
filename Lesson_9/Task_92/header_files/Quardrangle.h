#pragma once

#include "Figure.h"

// Производный класс Четырехугольник
class Quardrangle : public Figure
{
protected:
	double a{}, b{}, c{}, d{};  // стороны четырехугольника
	double A{}, B{}, C{}, D{};  // углы четырехугольника

public:

	// Конструктор с параметрами
	Quardrangle(double set_a, double set_b, double set_c, double set_d, double set_A, double set_B, double set_C, double set_D);

	// Методы доступа
	double get_a();
	double get_b();
	double get_c();
	double get_d();
	double get_A();
	double get_B();
	double get_C();
	double get_D();

	// Переопределенный метод для вывода данных о четырехугольнике
	void printData() override;

};
