// Файл реализации для производного класса Верблюд-быстроход
#include "CamelFast.h"

// Конструктор c параметром distance
CamelFast::CamelFast()
{
	// Характеристики ТС - Верблюд-быстроход
	name = new char[40] {"Верблюд-быстроход"};
	speed = 40;
	drivingTime = 10;
	numRestTimes = 3;
	restTime = new double[numRestTimes] {5, 6.5, 8};
}

// Деструктор для удаления памяти, отведенной под динамический массив
CamelFast::~CamelFast()
{
	delete[] restTime;
	delete[] name;

}