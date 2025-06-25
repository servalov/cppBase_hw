// Заголовочный файл для производного класса Ковер-самолет 
#ifndef FLYINGCARPET_H
#define FLYINGCARPET_H

#include "Air.h"

// Производный класс Ковер-самолет от воздушного транспорта (определяем макрос RaceDLL_API на класс)
class RaceDLL_API FlyingCarpet : public Air
{
	public:
		FlyingCarpet();                               // Конструктор
		double calcCoefDist(double dist) override;       // метод определения коэффициента сокращения расстояния
		~FlyingCarpet();							  // Деструктор	
};

#endif // !FLYINGCARPET_H

