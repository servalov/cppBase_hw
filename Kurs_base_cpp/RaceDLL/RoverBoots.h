// Заголовочный файл для производного класса Ботинки-вездеходы
#ifndef ROVERBOOTS_H
#define ROVERBOOTS_H

#include "Ground.h"

// Производный класс Ботинки-вездеходы от наземного транспорта (определяем макрос RaceDLL_API на класс)
class RaceDLL_API RoverBoots : public Ground
{
	public:
		RoverBoots(int dist);       // Конструктор c параметром distance
		~RoverBoots();              // Деструктор 
};

#endif // !ROVERBOOTS_H

