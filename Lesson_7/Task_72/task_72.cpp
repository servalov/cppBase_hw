// Исключение и обработка ошибок. Задание 2. Исклчение в конструкторах.
#include <windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Rigth_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Quardrangle.h"
#include "Parallelogram.h"
#include "Rect.h"
#include "Rhombus.h"
#include "Square.h"
#include "Figure_Exception.h"

// Функция для вывода информации о фигуре
void print_Info(Figure* fg);

int main()
{
	SetConsoleOutputCP(CP_UTF8);

		try
		{
			std::cout << "Треугольник:" << std::endl;
			Triangle tr{ 3, 10, 20, 30, 50, 60, 70 };
			print_Info(&tr);
			
			std::cout << "Правильный треугольник:" << std::endl;
			Rigth_Triangle r_tr{3, 10, 20, 30, 50, 40, 90 };
			print_Info(&r_tr);
			
			std::cout << "Равнобедренный треугольник:" << std::endl;
			Isosceles_Triangle is_tr{3, 30, 20, 30, 70, 40, 70 };
			print_Info(&is_tr);
			
			std::cout << "Равносторонний треугольник:" << std::endl;
			Equilateral_Triangle eq_tr{ 3, 20, 20, 20, 60, 60, 60 };
			print_Info(&eq_tr);

			std::cout << "Четырехугольник:" << std::endl;
			Quardrangle qr{4, 10, 20, 30, 40, 50, 60, 130, 120};
			print_Info(&qr);
			
			std::cout << "Параллелограмм:" << std::endl;
			Parallelogram par{ 4, 10, 40, 10, 40, 50, 130, 50, 130 };
			print_Info(&par);
			
			std::cout << "Прямоугольник:" << std::endl;
			Rect rect{ 4, 10, 40, 10, 40, 90, 90, 90, 90 };
			print_Info(&rect);
			
			std::cout << "Ромб:" << std::endl;
			Rhombus rh{ 4, 40, 40, 40, 40, 30, 150, 40, 150 };
			print_Info(&rh);

			std::cout << "Квадрат:" << std::endl;
			Square sq{ 4, 10, 10, 10, 10, 90, 90, 90, 80 };
			print_Info(&sq);

		}
		catch (const FigureException& exception)
		{
			std::cout << exception.what() << std::endl;
		}

	return EXIT_SUCCESS;
}

// Функция для вывода информации о фигуре
void print_Info(Figure* fg)
{
	fg->printData();
}