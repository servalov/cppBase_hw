#include "Rigth_Triangle.h"

Rigth_Triangle::Rigth_Triangle(double set_a, double set_b, double set_c, double set_A, double set_B) : Triangle(set_a, set_b, set_c, set_A, set_B, 90)
{
	sides_count = 3;
	name = "Правильный треугольник";
}