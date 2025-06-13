// Файл реализации для производного класса Ботинки-вездеходы
#include "RoverBoots.h"

// Конструктор c параметром distance
RoverBoots::RoverBoots(int dist)
{
	// Характеристики ТС - Ботинки-вездеходы
	name = "Ботинки-вездеходы";
	speed = 6;
	drivingTime = 60;
	numRestTimes = 2;
	restTime = new double[numRestTimes] {10, 5};
	distance = dist;
}

// Деструктор 
RoverBoots::~RoverBoots()
{

}