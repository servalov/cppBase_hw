#pragma once
#include <iostream>

// Класс счетчик
class Counter
{
private:
	int count{};    // переменная счетчик

public:

	// Конструктор без параметров 
	Counter();

	// Конструктор с параметром и списком инициализации
	Counter(int setCount);
	
	// Метод для увеличения счетчика
	void increment();

	// Метод для уменьшения счетчика
	void decrement();

	// Метод для вывода текущего состояния счетчика
	void print_count();
};
