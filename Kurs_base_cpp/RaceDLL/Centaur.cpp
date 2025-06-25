// Файл реализации для производного класса Кентавр
#include "Centaur.h"

// Конструктор c параметром distance
Centaur::Centaur()
{
	// Характеристики ТС - Кентавр
	name = new char[40]{"Кентавр"};
	speed = 15;
	drivingTime = 8;
	numRestTimes = 1;
	restTime = new double[numRestTimes] {2.0};
}

// Деструктор 
Centaur::~Centaur()
{
	delete[] restTime;
	delete[] name;

}