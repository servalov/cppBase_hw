﻿// Файл реализации для производного класса Ковер-самолет 
#include "FlyingCarpet.h"

// Конструктор c параметром distance
FlyingCarpet::FlyingCarpet()
{
	// Характеристики ТС - Ковер-самолет 
	name = new char[40] {"Ковер-самолет"};
	speed = 10;
}

// метод определения коэффициента сокращения расстояния
double FlyingCarpet::calcCoefDist(double dist)
{
	int coefMas[] = {0,3,10,5};
	int distMas[] = { 1000,5000,10000 };
	double coef{};
	
	if (dist < distMas[0])
	{
		coef = coefMas[0];
	}
	else if (dist < distMas[1])
	{
		coef = coefMas[1];
	}
	else if (dist < distMas[2])
	{
		coef = coefMas[2];
	}
	else
	{
		coef = coefMas[3];
	}
	return static_cast<double>(1-coef/100);
}

FlyingCarpet::~FlyingCarpet()
{
	delete[] name;
}