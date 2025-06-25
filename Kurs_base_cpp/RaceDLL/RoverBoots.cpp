// Файл реализации для производного класса Ботинки-вездеходы
#include "RoverBoots.h"

// Конструктор c параметром distance
RoverBoots::RoverBoots()
{
	// Характеристики ТС - Ботинки-вездеходы
	name = new char[40] {"Ботинки-вездеходы"};
	speed = 6;
	drivingTime = 60;
	numRestTimes = 2;
	restTime = new double[numRestTimes] {10, 5};
}

// Деструктор 
RoverBoots::~RoverBoots()
{
	delete[] name;
}