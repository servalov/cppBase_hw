// Файл реализации для производного класса Наземные ТС
#include "Ground.h"

// Конструктор без параметров
Ground::Ground()
{
	
}

// метод определения времени прохождения гонки для наземного транспорта
void Ground::calcRaceTime()
{
	double result = distance / speed ;
	int restCount{ static_cast<int>(result / drivingTime) };

	if ((static_cast<int>(result)) % drivingTime == 0)
	{
		--restCount;
	}
	
	for (int i{}; i < restCount; ++i)
	{
		if (i < numRestTimes)
		{
			result += restTime[i];
		}
		else
		{
			//result += restTime[numRestTimes - 1];
			result += restTime[numRestTimes - 1] * (restCount - i);
			break;
		}
	}
	resultTime = result;
}