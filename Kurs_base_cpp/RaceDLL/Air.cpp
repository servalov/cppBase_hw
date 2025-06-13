// Файл реализации для производного класса Воздушное ТС
#include "Air.h"

// Конструктор без параметров
Air::Air()
{

}

// метод определения коэффициента сокращения расстояния
double Air::calcCoefDist(int dist)
{
	return 1;
}

// метод определения времени прохождения гонки для воздушного транспорта
void Air::calcRaceTime()
{
	
	resultTime=static_cast<double>((distance * coefRaceDist) / speed);
}

