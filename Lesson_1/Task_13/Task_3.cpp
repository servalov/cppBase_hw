// Структуры и перечисления. Задача 3. Вывод структуры
#include<iostream>

// Структура для хранения адреса
struct Address
{
	std::string town;        // название города
	std::string street;      // название улицы
	int num_house;           // номер дома
	int num_flat;            // номер квартиры
	int index;               // индекс   
};

void printAddress(Address* ad);   // функция для вывода адреса

int main()
{
	setlocale(LC_ALL, "Russian");
	Address ad1{"Москва","Арбат",12,8,123456};
	Address ad2{"Ижевск","Ленина",15,82,852096};
	printAddress(&ad1);
	printAddress(&ad2);
	
	return EXIT_SUCCESS;
}

// Функция для вывода адреса
void printAddress(Address* ad)
{
	std::cout << "Город: " << ad->town << std::endl;
	std::cout << "Улица: " << ad->street << std::endl;
	std::cout << "Номер дома: " << ad->num_house << std::endl;
	std::cout << "Номер квартиры: " << ad->num_flat << std::endl;
	std::cout << "Индекс: " << ad->index <<"\n " << std::endl;
}