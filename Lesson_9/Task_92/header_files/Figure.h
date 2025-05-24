#pragma once

#include <iostream>

// Базовый класс Фигура
class Figure
{
protected:
	int sides_count{};       // количество сторон у фигуры
	std::string name{};      // название фигуры

public:

	// Конструктор без параметров
	Figure();

	// Метод для доступа информации о количестве сторон
	int get_sides_count();

	// Метод для доступа информации о названии фигуры
	std::string get_name();

	// Виртуальный метод для вывода информации о фигуре
	virtual void printData();

};