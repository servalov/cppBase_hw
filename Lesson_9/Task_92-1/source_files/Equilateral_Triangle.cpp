#include "Equilateral_Triangle.h"

Equilateral_Triangle::Equilateral_Triangle(double set_a) : Triangle(set_a, set_a, set_a, 60.0, 60.0, 60.0)
{
		sides_count = 3;
		name = "Равносторонний треугольник";
}
