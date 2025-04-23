#include "Rigth_Triangle.h"

Rigth_Triangle::Rigth_Triangle(int set_sides_count, double set_a, double set_b, double set_c, double set_A, double set_B, double set_C) : Triangle(set_sides_count, set_a, set_b, set_c, set_A, set_B, set_C)
{
	if (abs(C - 90) > eps) throw FigureException("Ошибка создания фигуры. Причина: угол С не равен 90");
	
	name = "Правильный треугольник";

}