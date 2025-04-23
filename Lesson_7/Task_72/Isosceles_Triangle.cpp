#include "Isosceles_Triangle.h"

Isosceles_Triangle::Isosceles_Triangle(int set_sides_count, double set_a, double set_b, double set_c, double set_A, double set_B, double set_C) : Triangle(set_sides_count, set_a, set_b, set_c, set_A, set_B, set_C)
{
	
	if ((abs(a - c) > eps) && (abs(A - C) > eps)) throw FigureException("Ошибка создания фигуры. Причина: стороны a и с не равны или углы А и С не равны");
	name = "Равнобедренный треугольник";
}