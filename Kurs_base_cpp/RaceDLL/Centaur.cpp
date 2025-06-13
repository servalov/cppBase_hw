// Файл реализации для производного класса Кентавр
#include "Centaur.h"

// Конструктор c параметром distance
Centaur::Centaur(int dist)
{
	// Характеристики ТС - Кентавр
	name = "Кентавр";
	speed = 15;
	drivingTime = 8;
	numRestTimes = 1;
	restTime = new double[numRestTimes] {2.0};
	distance = dist;
}

// Деструктор 
Centaur::~Centaur()
{
	delete[] restTime;
}