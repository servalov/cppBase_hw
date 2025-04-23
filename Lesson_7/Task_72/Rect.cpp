#include "Rect.h"

Rect::Rect( int set_sides_count, double set_a, double set_b, double set_c, double set_d, double set_A, double set_B, double set_C, double set_D) : Parallelogram(set_sides_count, set_a, set_b, set_c, set_d, set_A, set_B, set_C, set_D)
{
	if ((abs(A - 90.0) > eps) || (abs(B - 90.0) > eps)) throw FigureException("Ошибка создания фигуры. Причина: не все углы равны 90 ");
	name = "Прямоугольник";
}