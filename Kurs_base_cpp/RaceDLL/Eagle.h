// Заголовочный файл для производного класса Орел
#ifndef EAGLE_H
#define EAGLE_H

#include "Air.h"

// Производный класс Орел от воздушного транспорта (определяем макрос RaceDLL_API на класс)
class RaceDLL_API Eagle : public Air
{
public:
	Eagle();                                     // Конструктор
	double calcCoefDist(double dist) override;		 // метод определения коэффициента сокращения расстояния
	~Eagle();
};

#endif // !EAGLE_H

