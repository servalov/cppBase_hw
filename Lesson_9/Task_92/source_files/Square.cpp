#include "../header_files/Square.h"

Square::Square(double set_a) : Rect(set_a, set_a)
{
	sides_count = 4;
	name = "Квадрат";
}