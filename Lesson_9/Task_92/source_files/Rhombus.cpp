#include "../header_files/Rhombus.h"

Rhombus::Rhombus(double set_a, double set_A, double set_B) : Parallelogram(set_a, set_a, set_A, set_B)
{
	sides_count = 4;
	name = "Ромб";
}