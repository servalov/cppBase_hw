// Заголовочный файл для производного класса Наземные ТС
#ifndef GROUND_H
#define GROUND_H

#include "Transport.h"

// Производный класс для наземного транспорта (определяем макрос RaceDLL_API на класс Ground)
class RaceDLL_API Ground : public Transport
{
	protected:
		int drivingTime{};
		double* restTime{};
		int numRestTimes{};

	public:
		Ground();  // Конструктор без параметров
		void calcRaceTime(double distance) override;              // метод определения времени прохождения гонки для наземного транспорта
};

#endif // !GROUND_H
