#include "../header_files/Isosceles_Triangle.h"

Isosceles_Triangle::Isosceles_Triangle(double set_a, double set_b, double set_A, double set_B) : Triangle(set_a, set_b, set_a, set_A, set_B, set_A)
{
	sides_count = 3;
	name = "Равнобедренный треугольник";
}