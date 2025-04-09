#include "Counter.h"

Counter::Counter()
{
	count = 1;
}

// Конструктор с параметром и списком инициализации
Counter::Counter(int setCount) :count{ setCount }
{

}

// Метод для увеличения счетчика
void Counter::increment() 
{
	++count;
}

// Метод для уменьшения счетчика
void Counter::decrement()
{
	--count;
}

// Метод для вывода текущего состояния счетчика
void Counter::print_count() 
{
	std::cout << count << std::endl;
}


