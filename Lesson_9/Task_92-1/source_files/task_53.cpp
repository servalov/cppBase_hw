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

// Функция для вывода информации о фигуре
void print_Info(Figure* fg);

int main()
{
	//SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "Russian");

	// Объявление экземплятов объектов
	Figure fg;
	Triangle tr{ 10, 20, 30, 50, 60, 70 };
	Rigth_Triangle r_tr{ 10, 20, 30, 50, 60 };
	Isosceles_Triangle is_tr{ 10, 20, 50, 60 };
	Equilateral_Triangle eq_tr{ 30 };
	Quardrangle qr{ 10, 20, 30, 40, 50, 60, 70, 80 };
	Parallelogram par{ 20, 30, 30, 40 };
	Rect rect{ 10, 20 };
	Rhombus rh{ 30, 30, 40 };
	Square sq{ 20 };

	// Вывод информации о фигурах
	print_Info(&tr);
	print_Info(&r_tr);
	print_Info(&is_tr);
	print_Info(&eq_tr);
	print_Info(&qr);
	print_Info(&par);
	print_Info(&rect);
	print_Info(&rh);
	print_Info(&sq);

	return EXIT_SUCCESS;
}

// Функция для вывода информации о фигуре
void print_Info(Figure* fg)
{
	fg->printData();
}