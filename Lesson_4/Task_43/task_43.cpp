// ООП. Наследование и полиморфизм. Задание 4. Фигуры. Методы
#include <iostream>
#include <windows.h>

#define eps 10e-5        // Константа для проверки условий с вещественными числами

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

	// Виртуальный метод для проверки условий фигуры
	virtual bool check()
	{
		return (sides_count == 0) ? true : false;
	}
	
	// Виртуальный метод для вывода информации о фигуре
	virtual void printData()
	{
		std::cout << "----------------------------------------\n";
		std::cout << name << ": " << std::endl;
		if (check()) std::cout << "Правильная" << std::endl;
		else
		{
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides_count << std::endl;
	}
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

	// Переопределенный метод для проверки условий на треугольник
	bool check() override
	{
		return (abs(A + B + C - 180) < eps && (sides_count == 3)) ? true : false;
	}

	// Переопределенный метод для вывода данных о треугольнике
	void printData() override
	{
		std::cout << "----------------------------------------\n";
		std::cout << name << std::endl;
		if (check()) std::cout << "Правильная" << std::endl;
		else
		{
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides_count << std::endl;
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
	
	// Переопределенный метод для проверки условий на прямоугольный треугольник
	bool check() override
	{
		return Triangle::check() ? ((abs(C - 90.0) < eps) ? true : false) : false;
		//return (abs(C - 90.0) < eps) ? Triangle::check() : false;
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

	// Переопределенный метод для проверки условий на равнобедренный треугольник
	bool check() override
	{
		return Triangle::check() ? (((abs(a - c) < eps) && (abs(A - C) < eps)) ? true : false) : false;
		//return ((abs(a - c) < eps) && (abs(A - C) < eps)) ? Triangle::check() : false;
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

	// Переопределенный метод для проверки условий на равносторонний треугольник
	bool check() override
	{
		return Triangle::check() ? (((abs(a - b) < eps) && (abs(b - c) < eps) && (abs(A - 60.0) < eps) && (abs(B - 60.0) < eps) && (abs(C - 60.0) < eps)) ? true : false) : false;
		//return ((abs(a - b) < eps) && (abs(b - c) < eps) && (abs(A - 60.0) < eps) && (abs(B - 60.0) < eps) && (abs(C - 60.0) < eps)) ? Triangle::check() : false;
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

	// Переопределенный метод для проверки условий на четырехугольник
	bool check() override
	{
		return ((abs(A + B + C + D - 360) < eps) && (sides_count == 4)) ? true : false;
	}

	// Переопределенный метод для вывода данных о четырехугольнике
	void printData() override
	{
		std::cout << "----------------------------------------\n";
		std::cout << name << std::endl;
		if (check()) std::cout << "Правильная" << std::endl;
		else
		{
			std::cout << "Неправильная" << std::endl;
		}
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

	// Переопределенный метод для проверки условий на параллелограмм
	bool check() override
	{
		return Quardrangle::check() ? (((abs(a - c) < eps) && (abs(b - d) < eps) && (abs(A - C) < eps) && (abs(B - D) < eps)) ? true : false) : false;
		//return ((abs(a - c) < eps) && (abs(b - d) < eps) && (abs(A - C) < eps) && (abs(B - D) < eps)) ? Quardrangle::check() : false;
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

	// Переопределенный метод для проверки условий на прямоугольник
	bool check() override
	{
		return Parallelogram::check() ? (((abs(A - 90.0) < eps) && (abs(B - 90.0) < eps)) ? true : false) : false;
		//return ((abs(A - 90.0) < eps) && (abs(B - 90.0) < eps)) ? Parallelogram::check() : false;
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

	// Переопределенный метод для проверки условий на ромб
	bool check() override
	{
		return Parallelogram::check() ? ((abs(a - b) < eps) ? true : false) : false;
		//return (abs(a - b) < eps) ? Parallelogram::check() : false;
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

	// Переопределенный метод для проверки условий на квадрат
	bool check() override
	{
		return Parallelogram::check() ? ((abs(a - b) < eps) ? true : false) : false;
		//return (abs(a - b) < eps) ? Parallelogram::check() : false;
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

	Figure fq;
	print_Info(&fq);

	Triangle tr{ 10, 20, 30, 50, 60, 70 };
	print_Info(&tr);

	Rigth_Triangle r_tr{ 10, 20, 30, 50, 60 };
	print_Info(&r_tr);

	Isosceles_Triangle is_tr{ 10, 20, 50, 80 };
	print_Info(&is_tr);

	Equilateral_Triangle eq_tr{ 30 };
	print_Info(&eq_tr);

	Quardrangle qr{ 10, 20, 30, 40, 70, 110, 80, 100 };
	print_Info(&qr);

	Parallelogram par{ 20, 30, 30, 50 };
	print_Info(&par);

	Rect rect{ 10, 50 };
	print_Info(&rect);

	Rhombus rh{ 40, 30, 150 };
	print_Info(&rh);

	Square sq{ 20 };
	print_Info(&sq);

	return EXIT_SUCCESS;
}