#include "Quardrangle.h"

// Конструктор с параметрами
Quardrangle::Quardrangle(int set_sides_count, double set_a, double set_b, double set_c, double set_d, double set_A, double set_B, double set_C, double set_D) :Figure{set_sides_count }, a { set_a }, b{ set_b }, c{ set_c }, d{ set_d }, A{ set_A }, B{ set_B }, C{ set_C }, D{ set_D }
{
	if (sides_count != 4) throw FigureException("Ошибка создания фигуры. Причина: количество сторон не соответствует четырем");
	if (abs(A + B + C+ D - 360) > eps) throw FigureException("Ошибка создания фигуры. Причина: сумма углов не равна 360");

	name = "Четырехугольник";
};

// Методы доступа
double Quardrangle::get_a()
{
	return a;
}
double Quardrangle::get_b()
{
	return b;
}
double Quardrangle::get_c()
{
	return c;
}
double Quardrangle::get_d()
{
	return d;
}
double Quardrangle::get_A()
{
	return A;
}
double Quardrangle::get_B()
{
	return B;
}
double Quardrangle::get_C()
{
	return C;
}
double Quardrangle::get_D()
{
	return D;
}

// Переопределенный метод для вывода данных о четырехугольнике
void Quardrangle::printData()
{
	std::cout << name <<" создан "<< std::endl;
	std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
	std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
	std::cout << "----------------------------------------\n";
}