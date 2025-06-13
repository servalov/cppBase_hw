// Курсовой проект "Симулятор гонок"
#include <iostream>

#include "Transport.h"
#include "Camel.h"
#include "CamelFast.h"
#include "Centaur.h"
#include "RoverBoots.h"
#include "FlyingCarpet.h"
#include "Eagle.h"
#include "Broom.h"

enum class transportList {RoverBoots=1,Broom,Camel,Centaur,Eagle,CamelFast,FlyingCarpet};  // Перечисления для использования целочисленного номера транспорта
enum class raceList {Ground=1,Air,GroundAir};                                              // Перечисления для использования целочисленного номера гонки

bool checkTransport(Transport** tr, std::string* nameTransport, int countTransportRace, int transportTypeNum, int raceTypeNum);    // функция проверки наличия зарегистрированного транспорта для выбранного типа гонки          
void quick_sort(Transport** arr, int size);              // Алгоритм быстрой сортировки для массива экземпляторв класса Transport

int main()
{
	setlocale(LC_ALL, "Russian");

	// Интерфейс работы Гоночного симулятора

	int firstRace{ 0 };
	int exit{ 0 };
	int numRace{ 3 };
	const int numTransport{ 7 };
	std::string* nameRace=new std::string[numRace]{"Гонка для наземного транспорта", "Гонка для воздушного транспорта", "Гонка для наземного и воздушного транспорта"};
	std::string* nameTransport = new std::string[numTransport]{ "Ботинки-вездеходы", "Метла", "Верблюд", "Кентавр", "Орел", "Верблюд-быстроход", "Ковер-самолет" };

	do
	{
		int raceTypeNum{};
		int distance{};
		int transportTypeNum{};
		int countTransportRace{};
		Transport* tr[numTransport];
		
		system("cls");
		if (firstRace==0)
		{
			std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
		}
		
		std::cout << "1. Гонка для наземного транспорта" << std::endl;
		std::cout << "2. Гонка для воздушного транспорта" << std::endl;
		std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
		
		// Выбор типа гонки
		do
		{
			std::cout << "\nВыберете тип гонки: ";
			std::cin >> raceTypeNum;
			if ((raceTypeNum != 1) && (raceTypeNum != 2) && (raceTypeNum != 3))
			{
				std::cout << "Задан неправильный тип гонки!!!"<<std::endl;
			}
		} 
		while ((raceTypeNum != 1) && (raceTypeNum != 2) && (raceTypeNum != 3));
		std::cout << "Определена: " << nameRace[raceTypeNum - 1] << ". " << std::endl;

		// Определение дистанции
		do
		{
			std::cout << "\nУкажите длину дистанции (долна быть положительной и целочисленной): ";
			std::cin >> distance;
		} 
		while ((distance <= 0)||(distance>=100000));
		std::cout << "Определена длина дистанции: " << distance << std::endl;

		// Выбор и регистрация транспортных средств
		int action{};
		do
		{
			system("cls");
			std::cout <<"\nГонка "<< firstRace+1<<". "<<nameRace[raceTypeNum - 1] << ". ";
			std::cout << "Расстояние: " << distance << std::endl;
			//std::cout << "--------------------------------------------------------------" << std::endl;
			
			if (countTransportRace < 2)
			{
				std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
				std::cout << "1. Зарегистрировать транспорт" << std::endl;
				do
				{
					std::cout << "Выберите действие: ";
					std::cin >> action;
					if (action != 1)
					{
						std::cout << "Неправильное действие. Возможна только регистрация транспорта" << std::endl;
					}
				} while (action != 1);
			}
			else
			{
				std::cout << "Зарегистрированные транспортные средства: ";
				for (int i{}; i < countTransportRace; ++i)
				{
					std::cout << tr[i]->getName() << " ";
				}
				std::cout << std::endl;

				std::cout << "\n1. Зарегистрировать транспорт" << std::endl;
				std::cout << "2. Начать гонку" << std::endl;
				do
				{
					std::cout << "Выберите действие: ";
					std::cin >> action;
					if ((action != 1) && (action != 2))
					{
						std::cout << " Неправильное действие. Возможна только регистрация транспорта или начало гонки" << std::endl;
					}
				} while ((action != 1) && (action != 2));
			}

			if (action == 1)
			{
				system("cls");
			}

			// Регистрация транспорта в гонке
			if (action == 1)
			{
				do
				{
					std::cout <<"\n"<< nameRace[raceTypeNum - 1] << ". ";
					std::cout << "Расстояние: " << distance << std::endl;

					// Вывод зарегистрированного транспорта
					if (countTransportRace > 0)
					{
						std::cout << "Зарегистрированные транспортные средства: ";
						for (int i{}; i < countTransportRace; ++i)
						{
							std::cout << tr[i]->getName() << " ";
						}
						std::cout<<std::endl;
					}

					// Вывод перечня транcпортных средств для гонки
					for (int i{}; i < numTransport; ++i)
					{
						std::cout << i + 1 << ". " << nameTransport[i] << std::endl;
					}
					std::cout << "0. Закончить регистрацию" << std::endl;

					do
					{
						std::cout << "Выберете транспорт или 0 для окончания процесса регистрации: ";
						std::cin >> transportTypeNum;
						if ((transportTypeNum != 0) && (transportTypeNum != 1) && (transportTypeNum != 2) && (transportTypeNum != 3) && (transportTypeNum != 4)
							&& (transportTypeNum != 5) && (transportTypeNum != 6) && (transportTypeNum != 7))
						{
							std::cout << "\nНеправильное задание команды. Возможен выбор транспорта или окончание регистрации!!!" << std::endl;
						}
					} while ((transportTypeNum != 0) && (transportTypeNum != 1) && (transportTypeNum != 2) && (transportTypeNum != 3) && (transportTypeNum != 4)
						&& (transportTypeNum != 5) && (transportTypeNum != 6) && (transportTypeNum != 7));

					system("cls");
					// Регистрация нового транспорта
					if (transportTypeNum)
					{
						// Проверка наличия регистрации транспорта
						if (checkTransport(tr, nameTransport, countTransportRace, transportTypeNum, raceTypeNum))
						{
							// Включение нового транспорта
							switch (transportTypeNum)
							{
							case static_cast<int>(transportList::RoverBoots):		
								tr[countTransportRace] = new RoverBoots(distance);
								break;

							case static_cast<int>(transportList::Broom):
								tr[countTransportRace] = new Broom(distance);
								break;

							case static_cast<int>(transportList::Camel):
								tr[countTransportRace] = new Camel(distance);
								break;

							case static_cast<int>(transportList::Centaur):
								tr[countTransportRace] = new Centaur(distance);
								break;

							case static_cast<int>(transportList::Eagle):
								tr[countTransportRace] = new Eagle(distance);
								break;

							case static_cast<int>(transportList::CamelFast):
								tr[countTransportRace] = new CamelFast (distance);
								break;

							case static_cast<int>(transportList::FlyingCarpet):
								tr[countTransportRace] = new FlyingCarpet(distance);
								break;
							}

							// Определяем время прохождения дистанции (вызов переопределенного метода производного класса)
							tr[countTransportRace]->calcRaceTime();
							
							std::cout <<"\n"<<tr[countTransportRace]->getName() << " успешно зарегистрирован!";
							++countTransportRace;
						}
					}
				} while (transportTypeNum != 0);
			}
		} 
		while (action!=2);

		
		// Определение времени прохождения дистанции ТС
		// Быстрая сортировка массива для массива указателей на экземляры класса Transport
		quick_sort(tr, countTransportRace);
			
		std::cout << "\nРезультаты гонки " <<firstRace+1<<" ("<< nameRace[raceTypeNum - 1] << ". ";
		std::cout << "Расстояние: " << distance <<"): "<<std::endl;
		for (int i{}; i < countTransportRace; ++i)
		{
			std::cout << i+1<<". " << tr[i]->getName() << ". Время: " << tr[i]->getResult() << std::endl;
		}
		
		// Освобождение памяти под созданные объекты
		for (int i{}; i < countTransportRace; ++i)
		{
			delete tr[i];
		}
		
		//  Дальнейшия действия в Гоночном симуляторе
		std::cout << "\n1. Провести еще одну гонку " << std::endl;
		std::cout << "2. Выйти из гоночного симулятора " << std::endl;
		do
		{
			std::cout << "Выберите действие: ";
			std::cin >> exit;
			if ((exit != 1) && (exit != 2))
			{
				std::cout << "Неправильное действие. Возможно только проведение гонки и выход из гоночного симулятора!" << std::endl;
			}
		} while ((exit != 1) && (exit != 2));
		
		std::cout << std::endl;
		if (exit == 1)
		{
			++firstRace;  // номер следующей гонки   
		}
	} 
	while (exit != 2);

	// Освобождение памяти для созданных массивов
	delete[] nameRace;
	delete[] nameTransport;

	return EXIT_SUCCESS;
}

// Функция проверки наличия зарегистрированного транспорта для выбранного типа гонки 
bool checkTransport(Transport** tr, std::string* nameTransport, int countTransportRace, int transportTypeNum, int raceTypeNum)
{
	// Проверка на регистрацию наземного ТС
	if (raceTypeNum == static_cast<int>(raceList::Ground))
	{
		switch (transportTypeNum)
		{
			case static_cast<int>(transportList::RoverBoots):
				break;
			case static_cast<int>(transportList::Camel):
				break;
			case static_cast<int>(transportList::Centaur):
				break;
			case static_cast<int>(transportList::CamelFast):
				break;
			default:
				std::cout << "\nПопытка зарегистрировать неправильный тип транспорта !!!" << std::endl;
				return false;
				break;
		}
	}

	// Проверка на регистрацию воздушеого ТС
	if (raceTypeNum == static_cast<int>(raceList::Air))
	{
		switch (transportTypeNum)
		{
		case static_cast<int>(transportList::Broom):
			break;
		case static_cast<int>(transportList::Eagle):
			break;
		case static_cast<int>(transportList::FlyingCarpet):
			break;
		default:
			std::cout << "\nПопытка зарегистрировать неправильный тип транспорта !!!" << std::endl;
			return false;
			break;
		}
	}

	// Проверка на наличие регистрации
	for (int i{}; i < countTransportRace; ++i)
	{
		if (tr[i]->getName() == nameTransport[transportTypeNum-1])
		{
			std::cout <<"\nТС "<<tr[i]->getName() << " уже зарегистрирован!";
			return false;
		}
	}
	return true;
}

// Алгоритм пивотирования для быстрой сортировки
int pivoting(Transport** arr, int size, double p)
{
	int left = 0;
	int rigth = size - 1;

	while (true)
	{
		while (arr[left]->getResult() < p)
		{
			left += 1;
		}
		while (arr[rigth]->getResult() > p)
		{
			rigth -= 1;
		}
		if (left >= rigth)
		{
			return left;
		}
		else
		{
			Transport* tmp = arr[left];
			arr[left] = arr[rigth];
			arr[rigth] = tmp;

			left += 1;
			rigth -= 1;
		}
	}
}

// Алгоритм быстрой сортировки для массива экземпляторв класса Transport
void quick_sort(Transport** arr, int size)
{
	if (size > 1)
	{
		double mid = arr[size / 2]->getResult();
		int border{ pivoting(arr, size, mid) };

		quick_sort(arr, border);
		quick_sort(&arr[border], size - border);
	}
}