#include "Equilateral_Triangle.h"

Equilateral_Triangle::Equilateral_Triangle(int set_sides_count, double set_a, double set_b, double set_c, double set_A, double set_B, double set_C) : Triangle(set_sides_count, set_a, set_b, set_c, set_A, set_B, set_C)
{
	if ((abs(a - b) > eps) || (abs(b - c) > eps) || (abs(A - 60.0) > eps) || (abs(B - 60.0) > eps) || (abs(C - 60.0) > eps)) throw FigureException("Ошибка создания фигуры. Причина: все стороны не равны или все углы не равны 60");
	name = "Равносторонний треугольник";
}
