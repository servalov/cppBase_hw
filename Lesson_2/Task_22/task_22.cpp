// 2. Классы и объекты. Задание 2. Счетчик
#include <iostream>
#include <windows.h>

// Класс счетчик
class Counter
{
	private: 
		int count{};    // переменная счетчик

	public:
		
		// Конструктор без параметров (пустой)
		Counter()                
		{
			count = 1;
		}
		// Конструктор с параметром и списком инициализации
		Counter(int setCount) :count{ setCount }    
		{

		}
		// Метод для увеличения счетчика
		void increment()
		{
			++count;
		}
		// Метод для уменьшения счетчика
		void decrement()
		{
			--count;
		}
		// Метод для вывода текущего состояния счетчика
		void print_count()
		{
			std::cout << count << std::endl;
		}
};

int main()
{
	setlocale(LC_ALL,"Russian");
	SetConsoleCP(1251);

	int num{};
	std::string otvet{};

	Counter* count = nullptr;
		
	do
	{
		std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
		std::cin >> otvet;

		if (otvet == "да")
		{
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> num;
			count = new Counter(num);
		}
		else if (otvet == "нет")
		{
			count = new Counter();
		}
	} 
	while ((otvet != "да") && (otvet != "нет"));

	char ch;
	std::string str;
		do
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> str;
			ch = str[0];               // берем из строки только первый символ (при ошибки, если будет введена строка, а не требуемый символ)
			switch (ch)
			{
			case '+':
				count->increment();    // вызов метода для увеличения счетчика
				break;
			case '-':
				count->decrement();    // вызов метода для уменьшения счетчика
				break;
			case '=':
				count->print_count();  // вызов метода для определения текущего значения счетчика
				break;
			case 'x':                  // латинский алфавит
				break;
			default:
				std::cout << "Неправильный ввод команды ('+', '-', '=' или 'x')!!! \n";
				break;
			}
		} while (ch != 'x');

		delete count;
	
	return EXIT_SUCCESS;
}