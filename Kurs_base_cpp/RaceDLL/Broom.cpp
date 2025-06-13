// Файл реализации для производного класса Метла
#include "Broom.h"

 // Конструктор c параметром distance
Broom::Broom(int dist)
{
	// Характеристики ТС - Метла 
	name = "Метла";
	speed = 20;
	distance = dist;
	coefRaceDist = 1-static_cast<double>(dist/1000)/100;
}