// Заголовочный файл для производного класса Метла
#ifndef BROOM_H
#define BROOM_H

#include "Air.h"

// Производный класс Метла от воздушного транспорта (определяем макрос RaceDLL_API на класс)
class RaceDLL_API Broom : public Air
{
public:
	  Broom(int dist);          // Конструктор c параметром distance
};

#endif // !BROOM_H
