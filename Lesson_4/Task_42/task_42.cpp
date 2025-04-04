// ООП. Наследование и полиморфизм. Задание 4. Фигуры. Стороны и углы
#include <iostream>
#include <windows.h>

// Базовый класс Фигура
class Figure
{
protected:
	int sides_count{};       // количество сторон у фигуры
	std::string name{};      // название фигуры

public:
	
	// Конструктор без параметров
	Figure()
	{
		sides_count = 0;
		name = "Фигура";
	}

	// Метод для доступа информации о количестве сторон
	int get_sides_count()
	{
		return sides_count;
	}

	// Метод для доступа информации о названии фигуры
	std::string get_name()
	{
		return name;
	}

	// Виртуальный метод для вывода информации о фигуре
	virtual void printData()
	{}
};

// Производный класс Треугольник
class Triangle : public Figure
{
protected:
	double a{}, b{}, c{};  // стороны треугольника
	double A{}, B{}, C{};  // углы треугольника
public:

	// Конструктор с параметрами
	Triangle(double set_a, double set_b, double set_c, double set_A, double set_B, double set_C) : a{ set_a }, b{ set_b }, c{ set_c }, A{ set_A }, B{ set_B }, C{ set_C }
	{
		sides_count = 3;
		name = "Треугольник";
	}

	// Методы доступа
	double get_a()
	{
		return a;
	}
	double get_b()
	{
		return b;
	}
	double get_c()
	{
		return c;
	}
	double get_A()
	{
		return A;
	}
	double get_B()
	{
		return B;
	}
	double get_C()
	{
		return C;
	}

	// Переопределенный метод для вывода данных о треугольнике
	void printData() override
	{
		std::cout << "----------------------------------------\n";
		std::cout << name << std::endl;
		std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
	}
};

// Производный класс Правильный треугольник
class Rigth_Triangle : public Triangle
{
public:

	Rigth_Triangle(double set_a, double set_b, double set_c, double set_A, double set_B) : Triangle(set_a, set_b, set_c, set_A, set_B, 90)
	{
		sides_count = 3;
		name = "Правильный треугольник";
	}
};

// Производный класс Равнобедренный треугольник
class Isosceles_Triangle : public Triangle
{
public:

	Isosceles_Triangle(double set_a, double set_b, double set_A, double set_B) : Triangle(set_a, set_b, set_a, set_A, set_B, set_A)
	{
		sides_count = 3;
		name = "Равнобедренный треугольник";
	}
};

// Производный класс Равносторонний треугольник
class Equilateral_Triangle : public Triangle
{
public:

	Equilateral_Triangle(double set_a) : Triangle(set_a, set_a, set_a, 60.0, 60.0, 60.0)
	{
		sides_count = 3;
		name = "Равносторонний треугольник";
	}
};

// Производный класс Четырехугольник
class Quardrangle : public Figure
{
protected:
	double a{}, b{}, c{}, d{};  // стороны четырехугольника
	double A{}, B{}, C{}, D{};  // углы четырехугольника

public:

	// Конструктор с параметрами
	Quardrangle(double set_a, double set_b, double set_c, double set_d, double set_A, double set_B, double set_C, double set_D) : a{ set_a }, b{ set_b }, c{ set_c }, d{ set_d }, A{ set_A }, B{ set_B }, C{ set_C }, D{ set_D }
	{
		sides_count = 4;
		name = "Четырехугольник";
	};

	// Методы доступа
	double get_a()
	{
		return a;
	}
	double get_b()
	{
		return b;
	}
	double get_c()
	{
		return c;
	}
	double get_d()
	{
		return d;
	}
	double get_A()
	{
		return A;
	}
	double get_B()
	{
		return B;
	}
	double get_C()
	{
		return C;
	}
	double get_D()
	{
		return D;
	}

	// Переопределенный метод для вывода данных о четырехугольнике
	void printData() override
	{
		std::cout << "----------------------------------------\n";
		std::cout << name<< std::endl;
		std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
	}
};

// Производный класс Параллелограмм
class Parallelogram : public Quardrangle
{
public:
	Parallelogram(double set_a, double set_b, double set_A, double set_B) :Quardrangle(set_a, set_b, set_a, set_b, set_A, set_B, set_A, set_B)
	{
		sides_count = 4;
		name = "Параллелограмм";
	}
};

// Производный класс Прямоугольник
class Rect : public Parallelogram
{
public:
	Rect(double set_a, double set_b) : Parallelogram(set_a, set_b, 90.0, 90.0)
	{
		sides_count = 4;
		name = "Прямоугольник";
	}
};

// Производный класс Ромб
class Rhombus : public Parallelogram
{
public:
	Rhombus(double set_a, double set_A, double set_B) : Parallelogram(set_a, set_a, set_A, set_B)
	{
		sides_count = 4;
		name = "Ромб";
	}
};

// Производный класс Квадрат
class Square : public Rect
{
public:
	Square(double set_a) : Rect(set_a, set_a)
	{
		sides_count = 4;
		name = "Квадрат";
	}
};

// Функция для вывода информации о фигуре
void print_Info(Figure* fg)
{
	fg->printData();
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// Объявление экземплятов объектов
	Figure fg;
	Triangle tr{10, 20, 30, 50, 60, 70};
	Rigth_Triangle r_tr{10, 20, 30, 50, 60};
	Isosceles_Triangle is_tr{10, 20, 50, 60};
	Equilateral_Triangle eq_tr{30};
	Quardrangle qr{10, 20, 30, 40, 50, 60, 70, 80};
	Parallelogram par{ 20, 30, 30, 40};
	Rect rect{10, 20};
	Rhombus rh{30, 30, 40};
	Square sq{20};

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