// Файл реализации для производного класса Орел
#include "Eagle.h"

// Конструктор c параметром distance
Eagle::Eagle(int dist)
{
	// Характеристики ТС - Орел 
	name = "Орел";
	speed = 8;
	distance = dist;
	coefRaceDist = 0.94;
}
      