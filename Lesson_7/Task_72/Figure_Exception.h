#pragma once

#include <iostream>
#include <stdexcept>

// Класс исключения для ошибки создания геометрической фигуры
class FigureException : public std::domain_error
{
private:
	std::string error{};
public:
	FigureException(std::string setError);

	const char* what() const noexcept override;

};
