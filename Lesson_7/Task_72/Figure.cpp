#include "Figure.h"

// Конструктор без параметров
Figure::Figure(int set_sides_count) :sides_count{ set_sides_count }
{
	name = "Фигура";
}

// Метод для доступа информации о количестве сторон
int Figure::get_sides_count()
{
	return sides_count;
}

// Метод для доступа информации о названии фигуры
std::string Figure::get_name()
{
	return name;
}

// Виртуальный метод для вывода информации о фигуре
void Figure::printData()
{}

