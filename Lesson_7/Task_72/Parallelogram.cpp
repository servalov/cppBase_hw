#include "Parallelogram.h"

Parallelogram::Parallelogram(int set_sides_count, double set_a, double set_b, double set_c, double set_d, double set_A, double set_B, double set_C, double set_D) : Quardrangle(set_sides_count, set_a, set_b, set_c, set_d, set_A, set_B, set_C, set_D)
{
	if ((abs(a - c) > eps) || (abs(b - d) > eps) || (abs(A - C) > eps) || (abs(B - D) > eps)) throw FigureException("Ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны, или углы A,C и B,D попарно не равны");
	name = "Параллелограмм";
}