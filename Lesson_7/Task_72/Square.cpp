#include "Square.h"

Square::Square(int set_sides_count, double set_a, double set_b, double set_c, double set_d, double set_A, double set_B, double set_C, double set_D) : Rect(set_sides_count, set_a, set_b, set_c, set_d, set_A, set_B, set_C, set_D)
{
	if (abs(a - b) > eps) throw FigureException("Ошибка создания фигуры. Причина: не все стороны равны и не все углы равны 90");
	name = "Квадрат";
}