// Заголовочный файл для базового класса Транспорт
#ifndef RaceDLL_H
#define RaceDLL_H

// Макрос для экспорта из динамической библиотеки
#ifndef RaceDLL_EXPORT
#define RaceDLL_API __declspec(dllexport)
#else
#define RaceDLL_API __declspec(dllimport)
#endif // !RaceDLL_EXPORT

#include <iostream>

// Базовый класс Транспорт (определяем макрос RaceDLL_API на класс Транспорт)
class RaceDLL_API Transport
{
	protected:    // Общие свойства для каждого транспорта
		std::string name{};        // название транспорта
		int speed{};               // скорость транспора
		int distance{};            // дистанция 
		double resultTime{};       // время прохлждения

	public:
		
		Transport();                       // Конструктор без параметров
		virtual void calcRaceTime();       // метод определения времени прохождения гонки
		double getResult();                // метод получения времени прохождения гонки (результата)
		std::string getName();             // метод получения наименования транспорта 

};

#endif // ! RaceDLL_H
