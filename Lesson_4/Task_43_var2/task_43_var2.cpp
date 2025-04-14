// ООП. Наследование и полиморфизм. Задание 4. Фигуры. Методы (вариант 2 с закрытыми полями)
#include <iostream>
#include <windows.h>

#define eps 10e-5       // Константа для проверки условий с вещественными числами

// Базовый класс Фигура
class Figure
{
private:
	int sides_count{};       // количество сторон у фигуры
	std::string name{};      // название фигуры

public:
	// Конструктор без параметров
	Figure(int setSides, std::string setName) : sides_count{ setSides }, name{ setName }
	{
		//std::cout << " Конструктор Figure!!!" << std::endl;
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
private:
	double a{}, b{}, c{};  // стороны треугольника
	double A{}, B{}, C{};  // углы треугольника
public:

	// Конструктор с параметрами
	Triangle(int setSides, std::string setName, double set_a, double set_b, double set_c, double set_A, double set_B, double set_C) : Figure(setSides, setName), a{ set_a }, b{ set_b }, c{ set_c }, A{ set_A }, B{ set_B }, C{ set_C }
	{
		//std::cout << " Конструктор Triangle!!!" << std::endl;
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
		return (abs(A + B + C - 180) < eps && (get_sides_count() == 3)) ? true : false;
	}

	// Переопределенный метод для вывода данных о треугольнике
	void printData() override
	{
		std::cout << "----------------------------------------\n";
		std::cout << get_name() << std::endl;
		if (check()) std::cout << "Правильная" << std::endl;
		else
		{
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
	}
};

// Производный класс Правильный треугольник
class Rigth_Triangle : public Triangle
{
public:

	Rigth_Triangle(int setSides, std::string setName, double set_a, double set_b, double set_c, double set_A, double set_B) : Triangle(setSides, setName, set_a, set_b, set_c, set_A, set_B, 90.0)
	{}

	// Переопределенный метод для проверки условий на прямоугольный треугольник
	bool check() override
	{
		return Triangle::check() ? ((abs(get_C() - 90.0) < eps) ? true : false) : false;
		//return (abs(get_C() - 90.0) < eps) ? Triangle::check() : false;
	}
};

// Производный класс Равнобедренный треугольник
class Isosceles_Triangle : public Triangle
{
public:

	Isosceles_Triangle(int setSides, std::string setName, double set_a, double set_b, double set_A, double set_B) : Triangle(setSides, setName, set_a, set_b, set_a, set_A, set_B, set_A)
	{}

	// Переопределенный метод для проверки условий на равнобедренный треугольник
	bool check() override
	{
		return Triangle::check() ? (((abs(get_a() - get_c()) < eps) && (abs(get_A() - get_C()) < eps)) ? true : false) : false;
		//return ((abs(get_a() - get_c()) < eps) && (abs(get_A() - get_C()) < eps)) ? Triangle::check() : false;
	}
};

// Производный класс Равносторонний треугольник
class Equilateral_Triangle : public Triangle
{
public:

	Equilateral_Triangle(int setSides, std::string setName, double set_a) : Triangle(setSides, setName, set_a, set_a, set_a, 60.0, 60.0, 60.0)
	{}

	// Переопределенный метод для проверки условий на равносторонний треугольник
	bool check() override
	{
		return Triangle::check() ? (((abs(get_a() - get_b()) < eps) && (abs(get_b() - get_c()) < eps) && (abs(get_A() - 60.0) < eps) && (abs(get_B() - 60.0) < eps) && (abs(get_C() - 60.0) < eps)) ? true : false) : false;
		//return ((abs(get_a() - get_b()) < eps) && (abs(get_b() - get_c()) < eps) && (abs(get_A() - 60.0) < eps) && (abs(get_B() - 60.0) < eps) && (abs(get_C() - 60.0) < eps)) ? Triangle::check() : false;
	}
};

// Производный класс Четырехугольник
class Quardrangle : public Figure
{
private:
	double a{}, b{}, c{}, d{};  // стороны четырехугольника
	double A{}, B{}, C{}, D{};  // углы четырехугольника

public:

	// Конструктор с параметрами
	Quardrangle(int setSides, std::string setName, double set_a, double set_b, double set_c, double set_d, double set_A, double set_B, double set_C, double set_D) : Figure(setSides, setName), a{ set_a }, b{ set_b }, c{ set_c }, d{ set_d }, A{ set_A }, B{ set_B }, C{ set_C }, D{ set_D }
	{
		//std::cout << " Конструктор Quardrangle!!!" << std::endl;
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
		return ((abs(A + B + C + D - 360) < eps) && (get_sides_count() == 4)) ? true : false;
	}

	// Переопределенный метод для вывода данных о четырехугольнике
	void printData() override
	{
		std::cout << "----------------------------------------\n";
		std::cout << get_name() << std::endl;
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
	Parallelogram(int setSides, std::string setName, double set_a, double set_b, double set_A, double set_B) :Quardrangle(setSides, setName, set_a, set_b, set_a, set_b, set_A, set_B, set_A, set_B)
	{}

	// Переопределенный метод для проверки условий на параллелограмм
	bool check() override
	{
		return Quardrangle::check() ? (((abs(get_a() - get_c()) < eps) && (abs(get_b() - get_d()) < eps) && (abs(get_A() - get_C()) < eps) && (abs(get_B() - get_D()) < eps)) ? true : false) : false;
		//return ((abs(get_a() - get_c()) < eps) && (abs(get_b() - get_d()) < eps) && (abs(get_A() - get_C()) < eps) && (abs(get_B() - get_D()) < eps)) ? Quardrangle::check() : false;
	}
};

// Производный класс Прямоугольник
class Rect : public Parallelogram
{
public:
	Rect(int setSides, std::string setName, double set_a, double set_b) : Parallelogram(setSides, setName, set_a, set_b, 90.0, 90.0)
	{}

	// Переопределенный метод для проверки условий на прямоугольник
	bool check() override
	{
		return Parallelogram::check() ? (((abs(get_A() - 90.0) < eps) && (abs(get_B() - 90.0) < eps)) ? true : false) : false;
		//return ((abs(get_A() - 90.0) < eps) && (abs(get_B() - 90.0) < eps)) ? Parallelogram::check() : false;
	}
};

// Производный класс Ромб
class Rhombus : public Parallelogram
{
public:
	Rhombus(int setSides, std::string setName, double set_a, double set_A, double set_B) : Parallelogram(setSides, setName, set_a, set_a, set_A, set_B)
	{}

	// Переопределенный метод для проверки условий на ромб
	bool check() override
	{
		return Parallelogram::check() ? ((abs(get_a() - get_b()) < eps) ? true : false) : false;
		//return (abs(get_a() - get_b()) < eps) ? Parallelogram::check() : false;
	}
};

// Производный класс Квадрат
class Square : public Rect
{
public:
	Square(int setSides, std::string setName, double set_a) : Rect(setSides, setName, set_a, set_a)
	{}

	// Переопределенный метод для проверки условий на квадрат
	bool check() override
	{
		return Parallelogram::check() ? ((abs(get_a() - get_b()) < eps) ? true : false) : false;
		//return (abs(get_a() - get_b()) < eps) ? Parallelogram::check() : false;
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

	Figure fq{ 0,"Фигура" };
	print_Info(&fq);

	Triangle tr{ 3,"Треугольник",10,20,30,50,60,70 };
	print_Info(&tr);

	Rigth_Triangle r_tr{ 3,"Прямоугольный треугольник",10,20,30,50,60 };
	print_Info(&r_tr);

	Isosceles_Triangle is_tr{ 3,"Равнобедренный треугольник",10,20,50,80 };
	print_Info(&is_tr);

	Equilateral_Triangle eq_tr{ 3,"Равностороннй треугольник",30 };
	print_Info(&eq_tr);

	Quardrangle qr{ 4,"Четырехугольник", 10, 20, 30, 40, 70, 110, 80, 100 };
	print_Info(&qr);

	Parallelogram par{ 4,"Параллелограмм", 20, 30, 30, 50 };
	print_Info(&par);

	Rect rect{ 4,"Прямоугольник", 10, 50 };
	print_Info(&rect);

	Rhombus rh{ 4,"Ромб", 40, 30, 150 };
	print_Info(&rh);

	Square sq{ 4,"Квадрат", 20 };
	print_Info(&sq);

	return EXIT_SUCCESS;
}