#include "Quardrangle.h"

// Конструктор с параметрами
Quardrangle::Quardrangle(double set_a, double set_b, double set_c, double set_d, double set_A, double set_B, double set_C, double set_D) : a{ set_a }, b{ set_b }, c{ set_c }, d{ set_d }, A{ set_A }, B{ set_B }, C{ set_C }, D{ set_D }
{
	sides_count = 4;
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
	std::cout << "----------------------------------------\n";
	std::cout << name << std::endl;
	std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
	std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}