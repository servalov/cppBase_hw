// Заголовочный файл для производного класса Воздушное ТС
#ifndef AIR_H
#define AIR_H

#include "Transport.h"

// Производный класс для воздушного транспорта (определяем макрос RaceDLL_API на класс Air)
class RaceDLL_API Air : public Transport
{
	protected:
		double coefRaceDist{};
	
	public:
		Air();                                     // Конструктор без параметров
		virtual double calcCoefDist(double dist);     // метод определения коэффициента сокращения расстояния
		void calcRaceTime(double distance) override;              // метод определения времени прохождения гонки для воздушного транспорта
};

#endif // !AIR_H


