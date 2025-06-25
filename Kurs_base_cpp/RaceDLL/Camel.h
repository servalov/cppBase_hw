// Заголовочный файл для производного класса Верблюд
#ifndef CAMEL_H
#define CAMEL_H

#include "Ground.h"

// Производный класс Верблюд от наземного транспорта (определяем макрос RaceDLL_API на класс)
class RaceDLL_API Camel : public Ground
{
	public:
		Camel();      // Конструктор
		~Camel();     // Деструктор  
};

#endif // !CAMEL_H

