// Файл реализации для производного класса Метла
#include "Broom.h"

 // Конструктор c параметром distance
Broom::Broom()
{
	// Характеристики ТС - Метла 
	name = new char[40]{"Метла"};
	speed = 20;
}

Broom::~Broom()
{
	delete[] name;

}

// метод определения коэффициента сокращения расстояния
double Broom::calcCoefDist(double dist)
{
	return 1 - static_cast<double>((dist / 1000) / 100);
}