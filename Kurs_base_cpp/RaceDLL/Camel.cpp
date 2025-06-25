// Файл реализации для производного класса Верблюд
#include "Camel.h"

// Конструктор c параметром distance
Camel::Camel()
{
	// Характеристики ТС - Верблюд
	name = new char[40]{"Верблюд"};
	speed = 10;
	drivingTime = 30;
	numRestTimes = 2;
	restTime = new double[numRestTimes] {5, 8};
}

// Деструктор для удаления памяти, отведенной под динамический массив
Camel:: ~Camel()
{
	delete[] restTime;
	delete[] name;

}