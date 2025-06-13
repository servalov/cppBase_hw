// Заголовочный файл для производного класса Ковер-самолет 
#ifndef FLYINGCARPET_H
#define FLYINGCARPET_H

#include "Air.h"

// Производный класс Ковер-самолет от воздушного транспорта (определяем макрос RaceDLL_API на класс)
class RaceDLL_API FlyingCarpet : public Air
{
	public:
		FlyingCarpet(int dist);                       // Конструктор c параметром distance
		double calcCoefDist(int dist) override;       // метод определения коэффициента сокращения расстояния
};

#endif // !FLYINGCARPET_H

