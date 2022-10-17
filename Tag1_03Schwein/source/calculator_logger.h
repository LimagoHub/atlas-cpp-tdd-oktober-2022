#pragma once
#include <iostream>

#include "calculator.h"
class calculator_logger : public calculator
{

	calculator& calc;
public:
	calculator_logger(calculator& calc)
		: calc(calc)
	{
	}

	double add(double a, double b) override
	{
		std::cout << "add wurde gerufen" << std::endl;
		return calc.add(a, b);
	}
};
