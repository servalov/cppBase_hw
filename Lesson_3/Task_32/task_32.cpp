//  ООП. Абстракция и инкапсуляция. Задание 2. Сортируем адреса
#include <iostream>
#include <fstream>
#include <windows.h>

// Объявление класса Address
class Address
{
private:
	std::string town{};          // название города
	std::string street{};        // название улицы
	std::string home{};          // номер дома
	std::string flat{};          // номер квартиры

public:

	// Конструктор с параметрами
	Address(std::string setTown, std::string setStreet, std::string setHome, std::string setFlat) : town{ setTown }, street{ setStreet }, home{ setHome }, flat{ setFlat }
	{};
	// Конструктор без параметров
	Address() {};

	// Метод на вывод строки данных
	std::string get_output_address()
	{
		return town + ", " + street + ", " + home + ", " + flat;
	}

	// Метод get для получения параметра town
	std::string get_town()
	{
		return town;
	}
};

// Прототип функции сортировки названий городов (сортировка пузырьком)
void sort(Address* a, int num);    

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int num{};
	std::string town{};
	std::string street{};
	std::string home{};
	std::string flat{};
	std::ifstream fin{"in.txt"};
	if (fin.is_open())                       // открытие файла на чтение
	{
		if (fin >> num)
		{
			Address* a = new Address[num];   // динамический массив для хранения адресов (тут потребовался конструктор по умолчанию)
			for (int i = {}; i < num; ++i)
			{
				fin >> town;
				fin >> street;
				fin >> home;
				fin >> flat;
				a[i] = Address{ town ,street ,home ,flat };    //  тут вышло с перезаписью объекта
			}
			 
			sort(a, num);                   // Сортируем объекты по названию города
			std::ofstream fout{ "out.txt" };
			if (fout.is_open())             // открытие файла на запись
			{
				fout << num << std::endl;
				for (int i = {}; i < num; ++i)
					fout << a[i].get_output_address() << std::endl;
			}
			else
			{
				std::cout << " Ошибка открытия файла out.txt !!!" << std::endl;
			}
			fout.close();
			delete[] a;                    // освобождение памяти
		}
		else
		{
			std::cout << " Ошибка данных файла in.txt !!!" << std::endl;
		}
	}
	else
	{
		std::cout << " Ошибка открытия файла in.txt !!!" << std::endl;
	}
	fin.close();

	return EXIT_SUCCESS;
}

// Реализация функции сортировки названий городов (сортировка пузырьком)
void sort(Address* a, int num)
{
	bool sorted{};
	Address temp;
	do
	{
		sorted = false;
		for (int i{ 1 }; i < num; ++i)
		{
			if (a[i - 1].get_town() > a[i].get_town())
			{
				temp = a[i - 1];
				a[i - 1] = a[i];
				a[i] = temp;
				sorted = true;
			}
		}
	} while (sorted);
}
