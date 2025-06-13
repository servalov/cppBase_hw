// Файл реализации для базового класса Транспорт
#include "Transport.h"

// Конструктор без параметров
Transport::Transport()
{

}

// метод получения наименования транспорта 
std::string Transport::getName()
{
	return name;
}

// метод определения времени прохождения гонки
void Transport::calcRaceTime()
{

}

// метод получения времени прохождения гонки (результата)
double Transport::getResult()
{
	return resultTime;
}

