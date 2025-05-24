#include "../header_files/Rect.h"

Rect::Rect(double set_a, double set_b) : Parallelogram(set_a, set_b, 90.0, 90.0)
{
	sides_count = 4;
	name = "Прямоугольник";
}