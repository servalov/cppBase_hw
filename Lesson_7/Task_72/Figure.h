#pragma once

#include <iostream>
#include "Figure_Exception.h"

#define eps 1e-5        // Константа для проверки условий с вещественными числами

// Базовый класс Фигура
class Figure
{
protected:
	int sides_count{};       // количество сторон у фигуры
	std::string name{};      // название фигуры

public:

	// Конструктор c параметрами
	Figure(int set_sides_count);

	// Метод для доступа информации о количестве сторон
	int get_sides_count();

	// Метод для доступа информации о названии фигуры
	std::string get_name();

	// Виртуальный метод для вывода информации о фигуре
	virtual void printData();

};