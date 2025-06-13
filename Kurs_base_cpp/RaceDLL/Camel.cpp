// Файл реализации для производного класса Верблюд
#include "Camel.h"

// Конструктор c параметром distance
Camel::Camel(int dist)
{
	// Характеристики ТС - Верблюд
	name = "Верблюд";
	speed = 10;
	drivingTime = 30;
	numRestTimes = 2;
	restTime = new double[numRestTimes] {5, 8};
	distance = dist;
}

// Деструктор для удаления памяти, отведенной под динамический массив
Camel:: ~Camel()
{
	delete[] restTime;
}