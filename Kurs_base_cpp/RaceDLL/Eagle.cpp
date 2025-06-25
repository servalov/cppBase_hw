// Файл реализации для производного класса Орел
#include "Eagle.h"

// Конструктор c параметром distance
Eagle::Eagle()
{
	// Характеристики ТС - Орел 
	name = new char[40]{"Орел"};
	speed = 8;
}

Eagle::~Eagle()
{
	delete[] name;

}

double Eagle::calcCoefDist(double dist)
{
	return 0.94;
}
      