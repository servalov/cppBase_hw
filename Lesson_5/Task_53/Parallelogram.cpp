#include "Parallelogram.h"

Parallelogram::Parallelogram(double set_a, double set_b, double set_A, double set_B):Quardrangle(set_a, set_b, set_a, set_b, set_A, set_B, set_A, set_B)
{
	sides_count = 4;
	name = "Параллелограмм";
}