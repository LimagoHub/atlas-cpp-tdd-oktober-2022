#pragma once
#include "gtest/gtest.h"
#include "../source/calc_client.h"
#include "../source/calculator.h"

#include "Mockcalculator.h"

class calc_client_test: public testing::Test
{
protected:
	Mockcalculator calculatorMock;
	calc_client object_under_test{calculatorMock};



	
};

