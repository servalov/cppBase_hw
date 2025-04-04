// ООП. Наследование и полиморфизм. Задание 4. Фигуры. Стороны и углы (вариант 2 с закрытыми полями)
#include <iostream>
#include <windows.h>

// Базовый класс Фигура
class Figure
{
private:
	int sides_count{};       // количество сторон у фигуры
	std::string name{};      // название фигуры

public:
	// Конструктор с параметрами
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

	// Виртуальный метод для вывода информации о фигуре
	virtual void printData()
	{}
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
	
	// Переопределенный метод для вывода данных о треугольнике
	void printData() override
	{
		std::cout << "----------------------------------------\n";
		std::cout << get_name() << std::endl;
		std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
	}
};

// Производный класс Правильный треугольник
class Rigth_Triangle : public Triangle
{
public:

	Rigth_Triangle(int setSides, std::string setName, double set_a, double set_b, double set_c, double set_A, double set_B) : Triangle(setSides, setName, set_a, set_b, set_c, set_A, set_B, 90)
	{}
};

// Производный класс Равнобедренный треугольник
class Isosceles_Triangle : public Triangle
{
public:

	Isosceles_Triangle(int setSides, std::string setName, double set_a, double set_b, double set_A, double set_B) : Triangle(setSides, setName, set_a, set_b, set_a, set_A, set_B, set_A)
	{}
};

// Производный класс Равносторонний треугольник
class Equilateral_Triangle : public Triangle
{
public:

	Equilateral_Triangle(int setSides, std::string setName, double set_a, double set_A) : Triangle(setSides, setName, set_a, set_a, set_a, set_A, set_A, set_A)
	{}
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

	// Переопределенный метод для вывода данных о четырехугольнике
	void printData() override
	{
		std::cout << "----------------------------------------\n";
		std::cout << get_name() << std::endl;
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
};

// Производный класс Прямоугольник
class Rect : public Parallelogram
{
public:
	Rect(int setSides, std::string setName, double set_a, double set_b) : Parallelogram(setSides, setName, set_a, set_b, 90.0, 90.0)
	{}
};

// Производный класс Ромб
class Rhombus : public Parallelogram
{
public:
	Rhombus(int setSides, std::string setName, double set_a, double set_A, double set_B) : Parallelogram(setSides, setName, set_a, set_a, set_A, set_B)
	{}
};

// Производный класс Квадрат
class Square : public Rect
{
public:
	Square(int setSides, std::string setName, double set_a) : Rect(setSides, setName, set_a, set_a)
	{}
};

// Функция для вывода информации о фигуре
void print_Info(Figure* fg)
{
	fg->printData();
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	Figure fg{ 0,"Фигура" };
	Triangle tr{ 3,"Треугольник",10,20,30,50,60,70 };
	Rigth_Triangle r_tr{ 3,"Прямоугольный треугольник",10,20,30,50,60 };
	Isosceles_Triangle is_tr{ 3,"Равнобедренный треугольник",10,20,50,60 };
	Equilateral_Triangle eq_tr{ 3,"Равностороннй треугольник",30,60 };
	Quardrangle qr{ 4,"Четырехугольник", 10, 20, 30, 40, 50, 60, 70, 80 };
	Parallelogram par{ 4,"Параллелограмм", 20, 30, 30, 40 };
	Rect rect{ 4,"Прямоугольник", 10, 20 };
	Rhombus rh{ 4,"Ромб", 30, 30, 40 };
	Square sq{ 4,"Квадрат", 20 };

	print_Info(&fg);
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