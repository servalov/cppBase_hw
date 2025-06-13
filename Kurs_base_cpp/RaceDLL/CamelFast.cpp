// Файл реализации для производного класса Верблюд-быстроход
#include "CamelFast.h"

// Конструктор c параметром distance
CamelFast::CamelFast(int dist)
{
	// Характеристики ТС - Верблюд-быстроход
	name = "Верблюд-быстроход";
	speed = 40;
	drivingTime = 10;
	numRestTimes = 3;
	restTime = new double[numRestTimes] {5, 6.5, 8};
	distance = dist;
}

// Деструктор для удаления памяти, отведенной под динамический массив
CamelFast::~CamelFast()
{
	delete[] restTime;
}