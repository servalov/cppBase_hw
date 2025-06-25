// Заголовочный файл для производного класса Верблюд-быстроход
#ifndef CAMELFAST_H
#define CAMELFAST_H

#include "Ground.h"

// Производный класс Верблюд-быстроход от наземного транспорта (определяем макрос RaceDLL_API на класс)
class RaceDLL_API CamelFast : public Ground
{
	public:
		CamelFast();			// Конструктор
		~CamelFast();			// Деструктор 	
};

#endif // !CAMELFAST_H

