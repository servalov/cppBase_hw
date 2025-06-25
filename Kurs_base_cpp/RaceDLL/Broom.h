// Заголовочный файл для производного класса Метла
#ifndef BROOM_H
#define BROOM_H

#include "Air.h"

// Производный класс Метла от воздушного транспорта (определяем макрос RaceDLL_API на класс)
class RaceDLL_API Broom : public Air
{
public:
	  Broom();										// Конструктор
	  double calcCoefDist(double dist) override;		// метод определения коэффициента сокращения расстояния
	  ~Broom();										// Деструктор 
};

#endif // !BROOM_H
