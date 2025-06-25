// Заголовочный файл для производного класса Кентавр
#ifndef CENTAUR_H
#define CENTAUR_H

#include "Ground.h"

// Производный класс Кентавр от наземного транспорта (определяем макрос RaceDLL_API на класс)
class RaceDLL_API Centaur : public Ground
{
	public:
		Centaur();           // Конструктор
		~Centaur();          // Деструктор 
};

#endif // !CENTAUR_H

